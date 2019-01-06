#include <iostream>
/*
 * Dummy class to test error catching in class objects;
 *
 */

using namespace std;

class CanGoWrong{

public:
    CanGoWrong(){
            char *pMemory = new char[10000000000];
            delete[] pMemory;
            delete[] pMemory;
    }

};




int main () {
    try{
        CanGoWrong wrong;
    }
    catch(std::exception &e){
        cout << "Caught Exception: " << e.what() << endl;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}