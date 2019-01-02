#include <iostream>

using namespace std;
class Frog{
private:
//data are encapsulated
    string name;
    const string &getName () const {
        return name;
    }
public:
    Frog (const string &name) : name(name) {}


    void info() {cout<<"My name is:"<<getName()<<endl;}
};


int main () {

    Frog frog("Freddy");
     frog.info();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}