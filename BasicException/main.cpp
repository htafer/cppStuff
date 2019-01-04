#include <iostream>

void mightGoWrong();

using namespace std;
int main () {

    try {
        mightGoWrong();
    }
    catch(int e){
        cout << "Error Code " << e << endl;
    }
    std::cout << "Still running" << std::endl;
    return 0;
}

void mightGoWrong(){
    bool error = true;
    if(error){
        throw 8;
    }
}