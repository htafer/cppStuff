#include <iostream>
#include <list>

using namespace std;
int main () {

    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(1);
    numbers.push_front(2);
    numbers.push_front(3);
    //looping through list
    for(list<int>::iterator it=numbers.begin(); it!=numbers.end(); it++){
        cout<<*it<<endl;
    }


    //insertion erasing of elements
    //insertion
    list<int>::iterator it = numbers.begin();
    numbers.insert(it,100);
    for(list<int>::iterator it=numbers.begin(); it!=numbers.end(); it++){
        cout<<*it<<endl;
    }
    //deletion!!!After deletion it does not point to anything!!!!
    //erase returns a pointer to the next element after the erased element
    it=numbers.erase(it++);
    cout<<*it<<endl;
    for(list<int>::iterator it=numbers.begin(); it!=numbers.end(); it++){
        cout<<*it<<endl;
    }


    std::cout << "Hello, World!" << std::endl;
    return 0;
}