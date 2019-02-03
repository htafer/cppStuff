#include <utility>

#include <iostream>
using namespace std;


//template functor
//the type to test is templated
//The functor allows to define the value to match against at run time
//T can be any type of string, int, custom type
template <class T>
struct MatchTest{
    //Copy constructor
    explicit MatchTest(T testObject): testObject(std::move(testObject)){}
    //functor code, overloading of the () operator
    //compare testObject against object
    bool operator()(T &object){
        return object == testObject;
    }
private:
    T testObject;
};


int main () {
    //value to check
    string value ="lion";
    //matching functor (cow) of type string
    MatchTest<string> predCow("cow");
    cout << predCow(value) << endl;

    //value to check
    int valueInt = 1;
    //matrching functor (1) of type int
    MatchTest<int> pred1(1);
    cout << pred1(valueInt) << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}