#include <iostream>

using namespace std;

class Complex{
private:
    double real;
    double imaginary;
public:
    Complex(){}
    Complex(double real, double imaginary) : real(real), imaginary(imaginary){}

    double getReal () const {
        return real;
    }

    void setReal (double real) {
        Complex::real = real;
    }

    double getImaginary () const {
        return imaginary;
    }

    void setImaginary (double imaginary) {
        Complex::imaginary = imaginary;
    }

    const Complex &operator=(const Complex &other){
        cout << "Overloaded '=' running" << endl;
        real = other.real;
        imaginary = other.imaginary;
        return *this;
    }

    Complex(const Complex &other){
        cout << "Copy constructor running" << endl;
        *this=other;
    }
    Complex operator*(const Complex &b){
        Complex complex;
        complex.real = this->real*b.real-this->imaginary*b.imaginary;
        complex.imaginary = this->real*b.imaginary+this->imaginary*b.real;
        return complex;

    }

    Complex operator+(const Complex &b){
        Complex complex(this->real+b.real, this->imaginary+b.imaginary);
        return complex;
    }

    friend ostream &operator<< (ostream &os, const Complex &complex) {
        os << "real: " << complex.real << " imaginary: " << complex.imaginary;
        return os;
    }

    bool operator< (const Complex &rhs) const {
        if (real < rhs.real)
            return true;
        if (rhs.real < real)
            return false;
        return imaginary < rhs.imaginary;
    }

    bool operator> (const Complex &rhs) const {
        return rhs < *this;
    }

    bool operator<= (const Complex &rhs) const {
        return !(rhs < *this);
    }

    bool operator>= (const Complex &rhs) const {
        return !(*this < rhs);
    }


    bool operator== (const Complex &rhs) const {
        return real == rhs.real &&
               imaginary == rhs.imaginary;
    }

    bool operator!= (const Complex &rhs) const {
        return !(rhs == *this);
    }

    Complex operator*() const{
        return Complex(real,-imaginary);
    }

};


int main () {
    Complex imag1(1,1);
    cout<<endl;
    Complex imag2(1,2);
    cout<<endl;
    Complex imag3=imag1;

    imag1=imag2;
    cout << imag1;
    cout << *imag1;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}