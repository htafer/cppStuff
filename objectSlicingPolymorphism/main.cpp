#include <iostream>

using namespace std;

class Parent{
private:
    int one;
public:
    Parent(): one(0){};
    Parent(const Parent &other): one(0){
        cout << "copy parent" << endl;
    }

    virtual void print(){
        cout << "Parent" << endl;
    }
    virtual ~Parent (){};



};

class Children : public Parent{
private:
    int two;
public:
    Children(): two(0){};
    void print(){
        cout << "Child" << endl;
    }
};


int main () {
    //casting
    Children c1;
    Parent &p1 = c1;
    p1.print();
    //casting
    Parent p2 = Children();
    p2.print();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}