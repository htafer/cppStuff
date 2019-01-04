#include <iostream>
#include <exception>

using namespace std;

class CustomException : public exception{
public:
    virtual const char* what() const throw(){
        return "Something went really wrong";
    }

};

//child class of exception class
class MyException: public exception{
public:
     const char* what() {
        return "Something bad happened!";
    }
};


//Another exception derived class
class MyOtherException: public exception{
public:
    virtual const char* what() const throw(){
        return "Other thing went wrong!";
    }
};



class TestOtherException{
public:
    void goesOtherWrong(){
        throw MyOtherException();
    }
};


class Test{
public:
    void goesWrong(){
        throw CustomException();
    }
};

int main () {
    TestOtherException testOther;
    Test test;
    try{
        test.goesWrong();
    }
    catch(CustomException &e){
        cout << e.what() << endl;
    }

    try{
        testOther.goesOtherWrong();
    }
    catch(MyOtherException &e){
        cout << e.what() << endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}