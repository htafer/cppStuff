#include <iostream>
#include <fstream>
#pragma pack(push,1)

using namespace std;

struct Person{
    char name[50];
    int age;
    double height;
};

#pragma pack(pop)

int main () {

    Person someone = {"Frodo", 220, 0.8};
    Person someoneElse = {};

    string fileName = "test.bin";

    fstream outputFile;

    //write binary file
    outputFile.open(fileName, ios_base::binary | ios_base::out);
    if(outputFile.is_open()){
        //We need to recast the data
        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
        outputFile.close();
    } else{
        cout << "Could not create file " << fileName << endl;
    }

    //read binary file
    fstream inputFile;
    inputFile.open(fileName, ios::binary | ios_base::in);
    if(inputFile.is_open()){
        inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
        inputFile.close();
    }else{
        cout << "Could not read file" << fileName << endl;
    }

    cout << ":" << someoneElse.name << ":" << someoneElse.age << ":" << someoneElse.height << endl;

    //64 bytes = 50 + 8 + 4 + padding until 64
    //In order to binary write to a file we need to switch off padding:
    //With #pragma pack(push,1) we can get rid of the padding
    return 0;
}