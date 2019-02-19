#include <iostream>
using namespace std;

class Test{
private:
    int one=1;
    int two=1;
public:
    void run(){
        int three=3;
        int four=4;
        //lambda capture of this, we gain access to class members.
        auto pLambda = [this,three,four](){
            cout << three << endl;
            cout << four << endl;
            cout << one << endl;
            cout << two << endl;
        };
        pLambda();
    }
};



int main () {
    Test test;
    test.run();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}