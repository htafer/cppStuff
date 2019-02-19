#include <iostream>
#include <memory>
using namespace std;

class Test{
public:
    Test(){
        cout << "created" << endl;
    }
    ~Test(){
        cout << "destroyed" << endl;
    }
    void greet(){
        cout << "Hello" << endl;
    }
};



class Temp{
private:
    unique_ptr<Test[]> pTest;
public:
    Temp():pTest(new Test[2]){};
};
int main () {


    unique_ptr<int> pTest(new int);

    *pTest = 7;





    cout << *pTest << endl;
    cout << "Finished" << endl;




    unique_ptr<Test> pTest2(new Test);
    pTest2->greet();


    unique_ptr<Test[]> pTest3(new Test[2]);
    pTest3[1].greet();


    Temp temp;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}