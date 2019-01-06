#include <iostream>
#include <fstream>

using namespace std;

int main () {
    //file handle
    fstream outFile;
    //file name
    string outputFileName;
    outputFileName = "text.txt";
    //initialize handle
    outFile.open(outputFileName,ios_base::in);
    //check if file can be opened
    if(outFile.is_open()){
        //write to file
        outFile << "Hello There" << endl;
        outFile.close();
    }
    else{
        cout<<"Could not create file:" << outputFileName << endl;
    }


    fstream inFile;

    string inputFileName = outputFileName;
    inFile.open(inputFileName);
    if(inFile.is_open()){
        //start reading file
        string line;
        while(inFile){
            getline(inFile,line);
            cout<<line<<endl;
        }

        inFile.close();
    }
    else {
        cout << "Cannot open file:" << inputFileName << endl;
    }
    return 0;
}