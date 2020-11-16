/**
 *  Created by NDHuy on 10/11/2020
 *  Copyright 2020 by SEstudio 
 *  Define Class for Point 2D 
 */

#include "Point.h"

Point::Point()
{
    this->x = 0; 
    this->y = 0;
}

Point::Point(int x, int y)
{
    this->x = x; 
    this->y = y;
}

Point::Point(const Point& point)
{
    this->x = point.x; 
    this->y = point.y;
}

Point::~Point()
{

}

void Point::setX(int x)
{
    this->x = x;
}

void Point::setY(int y)
{
    this->y = y;
}

int Point::getX()
{
    return this->x;
}

int Point::getY()
{
    return this->y;
}

double Point::Distance(const Point point)
{
    return sqrt(((this->x - point.x) * (this->x - point.x)) + ((this->y - point.y) * (this->y - point.y)));
}

ostream& operator<<(ostream& os, Point point)
{
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

istream& operator>>(istream& is, Point& point)
{
    cout << "Enter x = "; 
    is >> point.x; 
    
    cout << "Enter y = "; 
    is >> point.y;
    
    return is;
}