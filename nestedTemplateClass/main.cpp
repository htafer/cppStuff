#include <iostream>
#include "ring3.h"

using namespace std;
int main () {
    ring3<string> textring(3);
    textring.add("one");
    textring.add("two");
    textring.add("three");

    for(int i=0; i<textring.size();i++){
        cout << textring.get(i) << endl;
    }
    for(ring3<string>::iterator it=textring.begin(); it!=textring.end(); it++){
        cout << *it << endl;
    }
    for(auto value: textring){
        cout << value << endl;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}