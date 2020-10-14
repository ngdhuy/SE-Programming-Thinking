//
//  Created by NDHuy on 10/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to C++
//

#include <iostream>
#include "mylib.h"

using namespace std; 
using namespace myLib;

int main()
{
    ShowMessage();
    int a = 10; 
    int b = 25;
    cout << myFunc::Plus(a, b) << endl;
    myFunc::ShowMessage();
    return 0;
}