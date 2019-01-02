#include <iostream>
#include "Person.h"

int main() {
    Person person1("Bob", 42);
    Person person2("Sue", 45);
    cout << person1.toString()<<endl;
    cout << person2.toString()<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}