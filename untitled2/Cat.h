//
// Created by htafer on 28.12.18.
//

#ifndef UNTITLED2_CAT_H
#define UNTITLED2_CAT_H

#include <iostream>
using namespace std;

class Cat {
private:
    bool happy;
    string name;

public:

    Cat();
    virtual ~Cat();
    Cat(const Cat&);



    void speak();
    void makeHappy();
    void makeSad();
    string toString();
    void setName(const string &name);
    const string &getName() const;
    bool isHappy() const;
};


#endif //UNTITLED2_CAT_H
