#include <iostream>
#include <map>

using namespace std;


class Person{
private:
    string name;
    int age;
public:
    Person():name(""), age(0){}
    Person(string str, int age): name(str), age(age){}
    Person(const Person &other){
        cout << "Copy constructor is running" << endl;
        name = other.name;
        age = other.age;
    }
    //We need to add a const print statement
    void print() const {
        cout << name << ":" << age << endl;
    }
    //operator overloading of "<"

    bool operator<(const Person &other) const {
        if(name == other.name){
            return age<other.age;
        }
        return name < other.name;
    }

};


int main () {
    //Objects as keys
    //We need to overload the < operator in order for c++ to compare the entries
    map<Person, int> map1;
    map1[Person("Mike",41)] = 41;
    map1[Person("Mike",42)] = 42;
    map1[Person("Judith", 31)] = 31;
    map1[Person("Yo", 21)] = 21;

    for(auto itmap=map1.begin(); itmap != map1.end(); itmap++){
        itmap->first.print();
        cout<<itmap->second<<endl;
    }

    cout << endl;


    //Objects as value
    map<int, Person> people;
    people[40] = Person("John",32);
    people[1] = Person("Vicky",40);
    //Copy constructor runs twice for each insertion
    people.insert(make_pair(55, Person("Mike", 21)));
    people.insert(make_pair(43, Person("Judith", 34)));
    for(auto itmap=people.begin(); itmap != people.end(); itmap++){
        cout << itmap->first << ":";
        itmap->second.print();
    }
    //string as key
    map<string, int> ages;
    ages["john"]=40;
    ages["vicky"]=30;
    ages.insert(make_pair("Peter",50));
    cout << ages["john"] << endl;

    map<string, int>::iterator itmap;
    for(itmap=ages.begin(); itmap!=ages.end(); itmap++){
        cout << (*itmap).first << " " << (*itmap).second << endl;
        cout << itmap->first << ":" << itmap->second << endl;
    }
    if(ages.find("vicky")!=ages.end()){
        cout << "Found Vicky";
    } else{
        cout << "Key Vicky not Found" << endl;
    }
    return 0;
}