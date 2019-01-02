//
// Created by htafer on 28.12.18.
//

#ifndef NEWOPERATOR_ANIMAL_H
#define NEWOPERATOR_ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
private:
    string name;
    int age;
public:
    //Constructor
    Animal();

    Animal(const string &name, int age);
    //Copy constructor
    Animal(const Animal& other);
    //Destructor
    virtual ~Animal();
    //Getter and Setter
    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);
    //Other methods
    string getInfo();

};

Animal* createAnimal();


#endif //NEWOPERATOR_ANIMAL_H
