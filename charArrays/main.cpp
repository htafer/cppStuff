#include <iostream>

using namespace std;

int main() {

    char textArray[]="hello";
    int nChar = sizeof(textArray)-2; // -1 : 0-based -2: 0-based and \0 is last character
    char* pStart=textArray;
    char* pEnd=textArray+nChar;
    int count=0;
    while(pStart<pEnd){
        count++;
        char save = *pStart;
        cout << count << textArray << endl;*pStart = *pEnd;
        *pEnd = save;
        pStart++;
        pEnd--;
        cout << count << textArray << endl;

    }

    cout << textArray << flush;
    return 0;
}