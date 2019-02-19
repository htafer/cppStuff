#include <iostream>
using namespace std;
int main () {
    int cats=5;

    [cats]() mutable {
        cats=8;
        cout << cats << endl;
    }();

    cout << cats << endl;
    [&cats](){
        cats =8;
        cout << cats << endl;
    };
    cout << cats << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}