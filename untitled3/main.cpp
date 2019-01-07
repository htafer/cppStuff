#include <iostream>
#include <stack>
#include <queue>


using namespace std;
class Test{
private:
    string name;
public:
           Test(string name): name(name){}
           ~Test(){
               cout << "Object Destroyed" << endl;
           };



    void print(){
               cout << name << endl;
           };
};


int main () {
    //Stack Last In First Out LIFO
    stack<Test> testStack;
    testStack.push(Test("Mike"));
    testStack.push(Test("John"));
    testStack.push(Test("Sue"));
    cout << endl;
    //get a reference to the popped object
    //efficient, but once the object pointed is destroyed we lose the information
    Test &test1 = testStack.top();
    test1.print();
    while(testStack.size()>0){
        Test &test = testStack.top();
        test.print();
        testStack.pop();
    }
    //Queue Front In Front Out
    queue<Test> testQueue;
    testQueue.push(Test("Mike"));
    testQueue.push(Test("John"));
    testQueue.push(Test("Sue"));


    cout << endl;

    while(testQueue.size()>0){
        Test &test = testQueue.front();
        test.print();
        testQueue.pop();

    }



}