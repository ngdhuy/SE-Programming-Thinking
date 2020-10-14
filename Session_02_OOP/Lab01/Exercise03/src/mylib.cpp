//
//  Created by NDHuy on 10/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to C++
//

#include "mylib.h"

void myLib::ShowMessage()
{
    cout << "Hello world!!!" << endl;
}

void myFunc::ShowMessage()
{
    cout << "Hello world!!! => I am myFunc" << endl;
}

int myFunc::Plus(const int a, const int b)
{
    return a + b;
}