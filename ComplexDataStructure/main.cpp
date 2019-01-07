#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main () {

    map<string, vector<int>> scores;
    scores["Mike"].push_back(10);
    scores["Mike"].push_back(20);
    scores["Mike"].push_back(30);
    scores["Vicky"].push_back(15);

    for(auto it=scores.begin(); it!=scores.end();it++){
        cout << it->first << ":" << flush;
        for(auto itv = it->second.begin(); itv!=it->second.end(); itv++){
            cout << *itv << " " << flush;
        }
        cout << endl;
    }


    std::cout << "Hello, World!" << std::endl;
    return 0;
}