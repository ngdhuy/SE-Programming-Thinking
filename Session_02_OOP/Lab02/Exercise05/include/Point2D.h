/**
 *  Created by NDHuy on 20/04/2021
 *  Copyright 2020 by SEstudio 
 *  Point with Graphics
 */

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Point2D
{
    private:
        int x; 
        int y;

    public:
        // Constructor
        Point2D();
        Point2D(const int x, const int y);
        Point2D(const Point2D& point);

        // Destructor
        ~Point2D();

        // Getter
        int getX(); 
        int getY();

        // Setter
        void setX(int value);
        void setY(int value);

        // BUS
        void input();
        void output();
        string toString();
};