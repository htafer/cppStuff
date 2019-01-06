#include <iostream>
#include <fstream>

using namespace std;

int main () {


    ifstream inputFile;
    string inputFileName = "./text2.txt";

    inputFile.open(inputFileName);

    if(inputFile.is_open()){
        string line;
        while(inputFile){

            getline(inputFile,line,':');
            if(!inputFile){
                break;
            }
            string section;
            inputFile >> section;
            //remove newline character
            inputFile >> ws;
            cout << "'" << line << "'" <<  "----" << "'" << section << "'" << endl;
        }
        inputFile.close();
    } else{
        cout << "file " << inputFileName << "could not be opened" << endl;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}