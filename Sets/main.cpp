#include <iostream>
#include <set>

using namespace std;

class Person{
private:
    int age;
    string name;
public:
    Person ():name(""), age(0) {}

    Person (const string &name, int age) : age(age), name(name) {}

    bool operator< (const Person &rhs) const {
        if(name == rhs.name){
            if(age<rhs.age){
                return true;
            }
            else{
                return false;
            }
        }else{
            if(name<rhs.name){
                return true;
            }else{
                return false;
            }
        }
    }

    Person(const Person &person){
        name = person.name;
        age = person.age;
        cout << "Copy constructor called" << endl;
    }



    int getAge () const {
        return age;
    }

    const string &getName () const {
        return name;
    }
};



int main () {
    //own data type
    set<Person> groups;
    groups.insert(Person("Joe",20));
    groups.insert(Person("Mary",30));
    groups.insert(Person("Mary",31));
    //navigate
    for(auto it=groups.begin(); it!=groups.end(); it++){
        cout<<it->getName()<<":"<<it->getAge()<<endl;
    }
    //search

    auto itFind = groups.find(Person("Joe",20));
    if(itFind!=groups.end()){
        cout<<"Found "<< itFind->getName()<<":"<<itFind->getAge()<<endl;
    }




    //basal type
    set<int> numbers;
    numbers.insert(50);
    numbers.insert(30);
    numbers.insert(20);
    numbers.insert(10);

    for(auto it=numbers.begin(); it!=numbers.end(); it++){
        cout << *it << endl;
    }

    auto it=numbers.find(50);
    if(it!=numbers.end()){
        cout << "Found 50" << *it << endl;
    }

    set<string> names;



}