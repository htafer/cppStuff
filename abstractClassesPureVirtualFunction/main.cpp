#include <iostream>
#include <vector>

using namespace std;
//Abstract representation of an animal
//abstract class, must contain pure virtual function
class Animal{
public:
    //pure virtual function
    virtual void speak() =0;
    virtual void run() =0;
};
//Concrete representation of an animal
class Dog: public Animal{
public:
    void speak(){
        cout << "Woof" << endl;
    }
};


class Labrador: public Dog{
public:
    void run(){
        cout << "Labrador Running"<<endl;
    }
};
int main () {
    Labrador lab;
    lab.speak();
    lab.run();


    Animal *animals[5];
    animals[0] = &lab;
    animals[0]->speak();
    //same stuff with vector;
    vector<Animal* > zoo;
    zoo.push_back(&lab);
    zoo[0]->speak();
    //Stuff below wont compile
    //Animal animal;
    //animal.speak();
    //Dog dog;
    //dog.speak();
    //
    std::cout << "Hello, World!" << std::endl;
    return 0;
}