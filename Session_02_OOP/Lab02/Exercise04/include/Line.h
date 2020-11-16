/**
 *  Created by NDHuy on 10/11/2020
 *  Copyright 2020 by SEstudio 
 *  Define Class for Line 2D
 */

#include <iostream>
#include <math.h>
#include "Point.h"

#pragma once

using namespace std;

class Line
{
    private: 
        Point* pointBegin;
        Point* pointEnd;

    public:
        Line(); 
        Line(Point* begin, Point* end); 
        Line(const Line& line);
        
        ~Line(); 

        void setBegin(Point* point);
        void setEnd(Point* point); 

        Point* getBegin();
        Point* getEnd();

        double Length();
};