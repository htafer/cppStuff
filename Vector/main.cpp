#include <iostream>
#include <vector>


using namespace std;
int main () {
    vector<string> strings;
    //Automatic resizing of vector
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    //
    strings[1]="dog";

    //iteration through vector
    //for loop
    for(int i=0; i<strings.size(); i++){
        cout << strings[i] << endl;
    }
    //iterator
    vector<string>::iterator it = strings.begin();
    for(vector<string>::iterator it=strings.begin(); it!=strings.end(); it++){
        cout << *it << endl;
    }

    //do the same for int
    vector<int> ints;

    ints.push_back(1);
    ints.push_back(2);
    ints.push_back(3);

    for(vector<int>::iterator it=ints.begin(); it!=ints.end(); it++){
        cout << *it << endl;
    }
    //Two dimensional vectors
    //3 rows x 4 colums initialized to 0
    //3 rows of 4-dim vectors
    vector<vector<int>> grid(3,vector<int>(4,7));
    grid[1].push_back(8);
    //rows of vector, column of int
    for(int row=0; row<grid.size(); row++){
        for(int col=0; col<grid[row].size(); col++){
            cout << grid[row][col] << flush;
        }
        cout<<endl;
    }
    //Two dimensional vectors with iterators
    vector<vector<int>> gri(5,vector<int>(4,3));
    //We do the same with iterator
    for(vector<vector<int>>::iterator row=gri.begin(); row!=gri.end(); row++){
        for(vector<int>::iterator col=(*row).begin(); col!=(*row).end(); col++){
            cout << *col << " " << flush;
        }
        cout << endl;
    }







    cout << strings[1] << strings.size() << endl;
}