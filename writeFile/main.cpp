#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ifstream inputFile;
    ofstream outputFile;


    string outputFileName="text2.txt";

// write to output file
    outputFile.open(outputFileName);
    if(outputFile.is_open()){
        outputFile << "Line 1: Introduction" << endl;
        outputFile << "Line 2: Results" << endl;
        outputFile << "Line 3: Conclusion" << endl;
        outputFile.close();
    } else{
        cout << "Problem writing file" << endl;

    }
    //read output file

    string inputFileName=outputFileName;

    inputFile.open(inputFileName);
    if(inputFile.is_open()){
        string line;
        while(inputFile){
            getline(inputFile,line);
            cout << line << endl;
        }
        inputFile.close();
    } else{
        cout << "Problem reading file" << endl;
    }

    return 0;
}


////file handle
//fstream outFile;
////file name
//string outputFileName;
//outputFileName = "text.txt";
////initialize handle
//outFile.open(outputFileName,ios_base::in);
////check if file can be opened
//if(outFile.is_open()){
////write to file
//outFile << "Hello There" << endl;
//outFile.close();
//}
//else{
//cout<<"Could not create file:" << outputFileName << endl;
//}
//
//
//fstream inFile;
//
//string inputFileName = outputFileName;
//inFile.open(inputFileName);
//if(inFile.is_open()){
////start reading file
//string line;
//while(inFile){
//getline(inFile,line);
//cout<<line<<endl;
//}
//
//inFile.close();
//}
//else {
//cout << "Cannot open file:" << inputFileName << endl;
//}
//return 0;