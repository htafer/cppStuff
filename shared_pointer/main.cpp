#include <iostream>
#include <memory>

using namespace std;

class Test{
public:
    Test(){
        cout << "created" << endl;
    }

    void great(){
        cout << "hello" << endl;
    }

    ~Test(){
        cout << "destroyed" << endl;
    }
};




int main () {

    shared_ptr<Test> pTest2(nullptr);
    {
        shared_ptr<Test> pTest1 = make_shared<Test>();
        pTest2 =pTest1;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}