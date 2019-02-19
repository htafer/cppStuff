#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Test{
private:
    int id;
    string name;
public:
    Test(int id, string name) : id(id), name(name){

    }
    void print(){
        cout << id << ":" << name << endl;
    }

    bool operator< (const Test &rhs) const {
        if(name < rhs.name){
            return true;
        }else if(name==rhs.name){
            if (id < rhs.id){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }
};



int main () {

    vector<Test> tests;

    tests.push_back(Test(5,"Mike"));
    tests.push_back(Test(10,"Sue"));
    tests.push_back(Test(7,"Raj"));
    tests.push_back(Test(3,"Vicky"));

    sort(tests.begin(), tests.end());
    for(auto it = tests.begin(); it!=tests.end(); it++){
        it->print();
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}