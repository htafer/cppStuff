#include <iostream>

using namespace std;

//.h header file
class Test {
private:
    //This variable is shared among all instantiated objects
    static int count;
    //Initialization has to be done here
    static int const MAX = 99;
    int id;
public:
    static void showInfo () {
        cout << count << endl;
    }

public:
    int getId () const;

    Test () {
        id = (++count);
    }

    virtual ~Test ();
};

//.cpp file

int Test::count = 0;

int Test::getId () const {
    return id;
}

Test::~Test () {
    cout << "Object " << id << "being destroyed" << endl;
    count--;
    cout << count << " Object remaining" << endl;
}

int main () {

    //Test::showInfo();
    Test test1;
    cout << test1.getId() << endl;
    Test test2;
    cout << test2.getId() << endl;
    //Test::showInfo();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}