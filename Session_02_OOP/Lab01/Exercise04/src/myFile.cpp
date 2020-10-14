//
//  Created by NDHuy on 10/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to C++ with file access
//

#include "myFile.h"


myFile::Student myFile::StringToStudent(string s)
{
    Student student;
    int i = 0; 
    while(s[i] != '|')
        i++;
    
    student.id = stoi(s.substr(0, i));
    student.name = s.substr(i + 1, s.length() - i);

    return student;
}

bool myFile::Read_TextFile(char* fileName, Student* arrStudent, int &numStudent)
{
    ifstream f;
    f.open(fileName, ios::in);
    if(f.is_open())
    {
        string line; // char* line
        numStudent = 0;
        while(getline(f, line))
        {
            arrStudent[numStudent++] = StringToStudent(line);
        }
        f.close();
    }
    
    return true;
}

bool myFile::Write_TextFile(char* fileName, const Student* arrStudent, const int numStudent)
{
    ofstream f;
    f.open(fileName, ios::out | ios::trunc);
    for(int i = 0; i < numStudent; i++)
        f << arrStudent[i].id << "|" << arrStudent[i].name << endl;
    f.close();

    return true;
}

bool myFile::Read_BinaryFile(char* fileName, Student* arrStudent, int &numStudent)
{
    fstream f; 
    f.open(fileName, ios::in | ios::binary);
    if(f.is_open())
    {
        int i = 0;
        while(f.read((char*)&arrStudent[i], sizeof(Student)))
        {
            cout << arrStudent[i].id << " - " << arrStudent[i].name << endl;
            i++;
        }
        f.close();
    }
    return true;
}

bool myFile::Write_BinaryFile(char* fileName, Student* arrStudent, const int numStudent)
{
    fstream f; 
    f.open(fileName, ios::out | ios::binary);
    for(int i = 0; i < numStudent; i++)
    {
        f.write((char*)&arrStudent[i], sizeof(Student));
    }
    f.close();
    return true;
}
