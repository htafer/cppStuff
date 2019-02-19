#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;


bool check(string &test){
    return test.size() == 3;

}

void run(function<bool(string&)> check){
    string test = "dog";
    cout << check(test) << endl;
}


class Check{
public:
    bool operator()(string& test){
        return test.size() == 5;
     }
} check1;

int main () {
    int size=3;
    vector<string> vec{"one","two","three"};
    int count =  count_if(vec.begin(),vec.end(),[size](string test){return test.size() == size;});
    cout << count << endl;
    count =  count_if(vec.begin(),vec.end(),check);
    cout << count << endl;
    count =  count_if(vec.begin(),vec.end(),check1);
    cout << count << endl;
    auto lambda = [size](string test){return test.size()==size;};
    run(lambda);
    run(check1);
    run(check);


    function<int(int,int)> add = [](int one, int two){return one+two;};
    cout << add(7,3) << endl;
    return 0;
}