//
// Created by htafer on 28.12.18.
//

#include "Person.h"
#include <sstream>

Person::Person() : name(""), age(0) {}


Person::Person(const string &name, int age) : name(name), age(age) {}

Person::Person(const string &name) : name(name) {}

string Person::toString() {
    stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << "Age: ";
    ss << age;

    return ss.str();
}
