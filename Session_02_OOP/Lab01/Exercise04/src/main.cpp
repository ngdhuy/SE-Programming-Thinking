//
//  Created by NDHuy on 10/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to C++ with file access
//

#include <iostream>
#include <string>
#include "myFile.h"

#define MAX 20

using namespace std;

int main(int argc, char** argv)
{
    myFile::Student* arrStudent = (myFile::Student*)malloc(MAX * sizeof(myFile::Student));
    int numStudent = 5; 

    for(int i = 0; i < numStudent; i++)
    {
        arrStudent[i].id = i + 1;
        arrStudent[i].name = "No name" + to_string(i);
    }

    myFile::Write_BinaryFile(argv[1], arrStudent, numStudent);
    myFile::Read_BinaryFile(argv[1], arrStudent, numStudent);

    // myFile::Write_TextFile(argv[1], arrStudent, numStudent);
    
    // myFile::Student* lstStudent = (myFile::Student*)malloc(MAX * sizeof(myFile::Student));
    // int num_lstStudent = 0;

    // myFile::Read_TextFile(argv[1], lstStudent, num_lstStudent);
    // for(int i = 0; i < num_lstStudent; i++)
    // {
    //     cout << lstStudent[i].id << ". " << lstStudent[i].name << endl;
    // }
    
    return 0;
}