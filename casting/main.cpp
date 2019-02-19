#include <iostream>

using namespace std;

class Parent{
public:
    void speak(){
        cout << "parents!" << endl;
    }
};

class Brother: public Parent{

};

class Sister: public Parent {


};
int main () {
    Parent parent;
    Brother brother;


    //C-style casting
    float value = 3.23;
    cout << int(value) << endl;
    //C++-style casting
    cout << static_cast<int>(value)<<endl;

    //works
    Parent *pp = &brother;
    //allowed, but unsafe because function in brother might not be defined in parent;
    Brother *pb = static_cast<Brother *>(&parent);

    Parent *ppb = &parent;

    //Brother *pbb = static_cast<Brother *>(ppb);
    Brother *pbb = dynamic_cast<Brother *>(ppb);



    std::cout << "Hello, World!" << std::endl;
    return 0;
}