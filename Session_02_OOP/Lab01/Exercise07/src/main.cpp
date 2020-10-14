//
//  Created by NDHuy on 14/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to C++ with Vector<data type>
//

#include <iostream>
#include <vector>

#include "lib.h"

using namespace std;

int main(int argc, char** argv)
{
    int n = atoi(argv[1]);

    vector<int> _vector = CreateVector(n);

    if(Save(argv[2], _vector))
    {
        // _vector.clear();
        // Load(argv[2], _vector);

        Print(_vector);    
    }

    return 0;
}