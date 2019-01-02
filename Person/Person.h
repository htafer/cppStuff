//
// Created by htafer on 28.12.18.
//

#ifndef PERSON_PERSON_H
#define PERSON_PERSON_H

#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;

public:

    explicit Person(const string &name);

    Person();

    Person(const string &name, int age);

    string toString();

};


#endif //PERSON_PERSON_H
