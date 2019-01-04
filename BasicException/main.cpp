#include <iostream>

void mightGoWrong();
void usesMightGoWrong();
using namespace std;
int main () {
    try {
        //We catch the error
        mightGoWrong();
    }
    catch(int e){
        cout << "Error Message: " << e << endl;
    }
    catch(char const *e){
        cout <<  "Error Message: " << e << endl;
    }
    catch(string &e){
        cout <<  "Error Message: " << e << endl;
    }
    std::cout << "Still running" << std::endl;
    return 0;
}

void usesMightGoWrong(){
    //Exception get thrown all the way up
    mightGoWrong();
}

void mightGoWrong(){
    bool error1 = false;
    bool error2 = true;
    if(error1){
        throw "Error1";
    }
    else if(error2){
        throw string("Something went wrong");
    }
}