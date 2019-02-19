#include <iostream>


using namespace std;


int main () {

    int one =1;
    int two=2;
    int three=3;
    //lambda
    [](){cout << "Hello" << endl;}();
    //Will not compile below
    //[](){cout << one << endl;};
    //Capture one by value
    [one](){cout << one << endl;}();

    //Capture all variable by value
    [=](){cout << one << endl;}();
    //Capture all variable and 'three' by reference
    [=, &three](){three=7; cout << one << "," << two << endl;}();
    cout << three << endl;

    //Capture all variable by REFERENCE
    [&](){cout << one << endl;}();

    //Capture all variable by REFERENCE, two by value
    [&, two](){cout << one << endl;}();


    std::cout << "Hello, World!" << std::endl;
    return 0;
}