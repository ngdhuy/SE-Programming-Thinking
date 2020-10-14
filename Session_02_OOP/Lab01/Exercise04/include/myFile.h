//
//  Created by NDHuy on 10/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to C++ with file access
//

#include <iostream>
#include <fstream>
#include <string>

#pragma once

using namespace std;

namespace myFile
{
    typedef struct
    {
        int id; 
        string name;
    } Student;

    Student StringToStudent(string s);

    bool Read_TextFile(char* fileName, Student* arrStudent, int &numStudent);
    bool Write_TextFile(char* fileName, const Student* arrStudent, const int numStudent);

    bool Read_BinaryFile(char* fileName, Student* arrStudent, int &numStudent);
    bool Write_BinaryFile(char* fileName, Student* arrStudent, const int numStudent);  
}