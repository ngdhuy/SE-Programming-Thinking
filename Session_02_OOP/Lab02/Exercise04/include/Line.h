/**
 *  Created by NDHuy on 10/11/2020
 *  Copyright 2020 by SEstudio 
 *  Define Class for Point 2D 
 */

#include <iostream>
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
        Line(const Point begin, const Point end); 
        Line(const Line& line);
        
        ~Line(); 

        void setBegin(const Point& point);
        void setEnd(const Point& point); 

        Point getBegin();
        Point getEnd();

        double Length();
};