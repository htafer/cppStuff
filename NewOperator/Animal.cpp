//
// Created by htafer on 28.12.18.
//
#include <iostream>
#include <sstream>
#include "Animal.h"

using namespace std;

Animal::Animal() {
    cout << "Animal created" << endl;
}

Animal::Animal(const string &name, int age) : name(name), age(age) {}

Animal::~Animal() {
    cout << "Animal " << this->name << " destroyed " << endl;
}

Animal::Animal(const Animal &other) {
    this->name = other.name;
    this->age = other.age;
    cout << "Animal created by a copy constructor" << endl;
}

int Animal::getAge() const {
    return age;
}

void Animal::setAge(int age) {
    Animal::age = age;
}

const string &Animal::getName() const {
    return name;
}

void Animal::setName(const string &name) {
    Animal::name = name;
}

string Animal::getInfo() {
    stringstream ss;
    ss << "Animal Name: " << this->name << " Animal age: " << this->age ;
    return ss.str();
}

Animal* createAnimal() {
    Animal *pAnimal = new Animal();
    pAnimal->setName("Bertie");
    return pAnimal;
}
