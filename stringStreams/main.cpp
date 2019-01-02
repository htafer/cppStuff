#include <iostream>
#include <sstream>

using namespace std;

int main() {

    string name = "Bob";
    int age = 32;

    stringstream ss;

    ss << "Age is: ";
    ss << age;
    ss << endl;
    string info = ss.str();
     cout << info  << endl;

    return 0;
}