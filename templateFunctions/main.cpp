#include <iostream>

using namespace std;

template<class T>
void print(T n){
    cout << "Template version" << n << endl;
}

void print(int value){
    cout << "Non template version:" << value << endl;
}



int main () {
    std::cout << "Hello, World!" << std::endl;
    print<>(6);


    print(6);


    return 0;
}