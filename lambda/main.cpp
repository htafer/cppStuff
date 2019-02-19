#include <iostream>


using namespace std;


//Lambda are function are a way of defining a function at the point where it is needed;
//Lambda function are compatible with function pointers

void test(void (*pFunc)()){
    pFunc();
}

void testGreet(void (*pFunc)(string)){
    pFunc("bob");
}

void testDivide(double (*divide)(double a, double b)){
    auto rval  = divide(9.0,3.0);
    cout << rval << endl;
}

int main () {
    //lambda function
    auto func = [](){cout << "Hello" << endl;};
    func();
    //call function over function pointer
    test(func);

    test([](){cout << "Hello " << endl;});
    std::cout << "Hello, World!" << std::endl;

    auto pGreet = [](string name){cout << "Hello " << name << endl;};
    pGreet("Mike");
    testGreet(pGreet);

    auto pDivide = [](double a,double b) -> double {
        if(b==0){
            return 0;
        }
        return a/b;
    };
    cout << pDivide(10.0,0) << endl;
    testDivide(pDivide);

    return 0;
}