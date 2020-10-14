//
//  Created by NDHuy on 14/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to C++ with Vector<data type>
//

#include <iostream>
#include <fstream>
#include <vector>

#pragma once

using namespace std;

vector<int> CreateVector(const int n);
void Print(const vector<int> _vector);

bool Save(const char* fileName, const vector<int> _vector);
bool Load(const char* fileName, vector<int> &_vector);