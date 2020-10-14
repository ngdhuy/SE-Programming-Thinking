//
//  Created by NDHuy on 14/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to C++ with Vector<data type>
//

#include "lib.h"

vector<int> CreateVector(const int n)
{
    vector<int> _vector;

    for(int i = 0; i < n; i++)
        _vector.push_back(i);

    return _vector;
}

void Print(const vector<int> _vector)
{
    for(int i = 0; i < _vector.size(); i++)
        cout << _vector[i] << "\t";
    
    cout << endl;
}

bool Save(const char* fileName, const vector<int> _vector)
{
    fstream f(fileName, ios::out | ios::trunc | ios::binary);
    if(f.is_open())
    {
        for(int i = 0; i < _vector.size(); i++)
            f.write((char*)&_vector[i], sizeof(int));

        f.close();
        cout << "Saving is success" << endl;
        return true;
    }
    else
    {
        cout << "Cannot access file " << fileName << endl;
        return false;
    }
}

bool Load(const char* fileName, vector<int> &_vector)
{
    fstream f(fileName, ios::in | ios::binary);
    if(f.is_open())
    {
        int item;
        while(f.read((char*)&item, sizeof(int)))
        {
            _vector.push_back(item);
        }
        
        f.close();
        cout << "Loading is completed" << endl;
        return true;
    }
    else
    {
        cout << "Cannot access file " << fileName << endl;
        return false;
    }   
}