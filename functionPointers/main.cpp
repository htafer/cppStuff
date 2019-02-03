#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void test(int value){
    cout << "Hello" << value << endl;
}

int test2() {
    return 2;
}


bool match(string text){
    return text.size()==3;
}

//count number of strings in a text that pass the filter match
int countStrings(vector<string> &texts, bool (*match)(string test)){
    int count=0;
    for(int i = 0; i<texts.size(); i++){
        if(match(texts[i])){
            count++;
        }
    }
    return count;
}


void test3(int value){
    if(value==3){
        cout << "match: " << value << endl;
    }
}


int main () {





    //test();
    //pointer to function
    void (*pTest)(int) = test;

    pTest(8);
    //other pointer to other function
    int (*pTest2)() = test2;
    int two = pTest2();
    cout << "Hello" << two << endl;

    //Now from memory
    void (*pTest3)(int) = test3;
    pTest3(3);
    //function taking as input pointer to function
    vector<string> texts;
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("two");
    texts.push_back("four");
    texts.push_back("three");

    cout << match("one") << endl;
    cout << countStrings(texts, match) << endl;
    //similar
    cout << count_if(texts.begin(), texts.end(), match) << endl;
    std::cout << "Hello, World!" << std::endl;

    return 0;
}