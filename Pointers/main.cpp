#include <iostream>
using namespace std;


void manipulate(int *value){
    *value=10;
    cout<<"Value of int in manipulate:" << *value << endl;
}

int main() {

//Pointer magic

    int nValue=8;
    nValue = 9;

    int* pIntValue = &nValue;

    std::cout << *pIntValue << std::endl;

    std::cout << "Hello, World!" << std::endl;

    int nValue2;
    nValue2=20;
    cout << "1. nValue:" << nValue2 << endl;
    manipulate(&nValue2);
    cout << "2. nValue:" << nValue2 << endl;

    // String magic
    string texts[] = {"one","two","three"};
    string *pTexts = texts;

    int lengthOfArray = sizeof(texts) / sizeof(string);
    for(int i=0; i<lengthOfArray; i++){
        cout << *pTexts << " "<<flush;
        pTexts++;
    }



    return 0;
}