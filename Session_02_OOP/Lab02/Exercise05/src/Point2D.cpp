/**
 *  Created by NDHuy on 20/04/2021
 *  Copyright 2020 by SEstudio 
 *  Point with Graphics
 */

#include "Point2D.h"

Point2D::Point2D()
{
    this->x = 0; 
    this->y = 0;
}

Point2D::Point2D(const int x, const int y)
{
    this->x = x; 
    this->y = y;   
}

Point2D::Point2D(const Point2D& point)
{
    this->x = point.x; 
    this->y = point.y;
}

Point2D::~Point2D() {}

int Point2D::getX()
{
    return this->x;
}

int Point2D::getY()
{
    return this->y;
}

void Point2D::setX(int value)
{
    this->x = value;
}

void Point2D::setY(int value)
{
    this->y = value;
}

void Point2D::input()
{
    int temp;

    cout << "Enter x: "; 
    cin >> temp;
    this->x = temp;

    cout << "Enter y: ";
    cin >> temp;
    this->y = temp;
}

void Point2D::output()
{
    cout << "(" << this->x << ", " << this->y << ")" << endl;
}

string Point2D::toString()
{
    string s = "(" + to_string(this->x) + ", " + to_string(this->y) + ")";
    return s;
}