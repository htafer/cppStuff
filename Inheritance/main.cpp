#include <iostream>

using namespace std;

class Animal{
public:
    void speak(){cout<<"Grrr"<<endl;}
};

class Cat:public Animal{
public:
    void jump(){cout << "Cat jumping" << endl;}
};


class Tiger:public Cat{
public:
    void attackAntelope(){cout<<"Attacking antelope"<<endl;}
};


int main () {
    Animal animal1;
    animal1.speak();

    Cat cat1;
    cat1.speak();
    cat1.jump();

    Tiger tiger1;
    tiger1.jump();
    tiger1.speak();
    tiger1.attackAntelope();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}