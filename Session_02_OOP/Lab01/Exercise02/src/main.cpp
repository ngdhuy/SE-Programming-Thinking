//
//  Created by NDHuy on 10/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to C++
//

#include <iostream>

using namespace std;

int main()
{
    int i_number; 
    float f_value;
    double d_result; 

    cout << "Enter integer number: ";
    cin >> i_number;

    cout << "Enter float number: ";
    cin >> f_value;

    d_result = (double)i_number + (double)f_value;

    cout << "Result: " << d_result << endl;
    return 0;
}