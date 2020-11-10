/**
 *  Created by NDHuy on 10/11/2020
 *  Copyright 2020 by SEstudio 
 *  Define Class for Point 2D 
 */

#include <iostream>

#pragma once

using namespace std;

class Point
{
    private:
        int x; 
        int y;

    public:
        Point();
        Point(int x, int y);
        Point(const Point& point);

        ~Point();

        void setX(int x);
        void setY(int y);

        int getX();
        int getY();

        friend ostream& operator<< (ostream& os, Point point);
        friend istream& operator>> (istream& is, Point point);
};