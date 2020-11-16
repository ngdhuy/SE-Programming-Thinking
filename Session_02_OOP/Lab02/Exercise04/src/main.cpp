/**
 *  Created by NDHuy on 10/11/2020
 *  Copyright 2020 by SEstudio 
 *  Main of Program
 */

#include <iostream>
#include "Line.h"
#include "Point.h"

using namespace std; 

int main()
{
    Line* line = new Line();
    Point* begin = new Point(); 
    Point* end = new Point();

    cout << "Enter Begin point" << endl; 
    cin >> *begin;
    cout << *begin << endl;

    cout << "Enter End point" << endl;
    cin >> *end;
    cout << *end << endl;

    line->setBegin(begin);
    line->setEnd(end);

    cout << "Length of LINE: " << line->Length() << endl;
    return 0;
}