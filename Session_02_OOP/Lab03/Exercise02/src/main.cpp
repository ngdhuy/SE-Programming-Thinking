/**
 * Created by NDHuy on 03/12/2020
 * Copyright 2020 by SEstudio
 * Date-time class
 **/ 

#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date a(31, 12, 1);
    cout << a << "-" << a.getTimeStamp() << endl;
    Date b(1, 1, 2);
    cout << b << "-" << b.getTimeStamp() << endl;
    Date c(5, 12, 2020);
    cout << c << "-" << c.getTimeStamp() << endl;
    c++;
    cout << c << "-" << c.getTimeStamp() << endl;
    return 0;
}