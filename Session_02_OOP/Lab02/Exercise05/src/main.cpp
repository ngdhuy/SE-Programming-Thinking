/**
 *  Created by NDHuy on 20/04/2021
 *  Copyright 2020 by SEstudio 
 *  Point with Graphics
 */

#include <iostream>
#include <string>

#include "Point2D.h"

using namespace std; 

int main()
{
    Point2D point_1; 
    cout << "Point 01: " << point_1.toString() << endl;

    Point2D point_2(2, 4); 
    cout << "Point 02: " << point_2.toString() << endl;

    Point2D point_3(point_2);
    cout << "Point 03: " << point_3.toString() << endl;

    Point2D *p_1 = new Point2D();
    cout << "Pointer Point 1: " << p_1->toString() << endl;

    Point2D *p_2 = new Point2D(5, 3);
    cout << "Pointer Point 2: " << p_2->toString() << endl;

    Point2D *p_3 = new Point2D(*p_2);
    cout << "Pointer Point 3: " << p_3->toString() << endl;

    delete p_1; 
    delete p_2;
    delete p_3;

    Point2D point_4; 
    point_4.input();
    point_4.output();

    return 0;
}