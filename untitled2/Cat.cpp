//
// Created by htafer on 28.12.18.
//
#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
    Cat::happy=true;
    Cat::name="george";
}

Cat::~Cat() {
    cout<<"Cat destroyed"<<endl;

}

Cat::Cat(const Cat& other): name(other.name), happy(other.happy){ cout << "Cat created by copying" << endl;};

const string &Cat::getName() const {
    return name;
}

void Cat::setName(const string &name) {
    Cat::name = name;
}


void Cat::speak() {
    if (Cat::happy) {
        cout << "Miau" << endl;
    } else {
        cout << "Khussh" << endl;
    }
}

void Cat::makeHappy() {
    Cat::happy = true;
}

void Cat::makeSad() {
    Cat::happy = false;
}

string Cat::toString(){
    return "Cat's name is " + name;
}








