/**
 *  Created by NDHuy on 10/11/2020
 *  Copyright 2020 by SEstudio 
 *  Define Class for Line 2D
 */

#include <iostream>
#include "Line.h"

Line::Line()
{
    this->pointBegin = new Point(); 
    this->pointEnd = new Point();
}

Line::Line(Point* begin, Point* end)
{
    this->pointBegin = begin; 
    this->pointEnd = end;
}

Line::Line(const Line& line)
{
    this->pointBegin = line.pointBegin; 
    this->pointEnd = line.pointEnd;
}

Line::~Line()
{
    delete this->pointBegin;
    this->pointBegin = NULL;

    delete this->pointEnd;
    this->pointEnd = NULL;
}

void Line::setBegin(Point* point)
{
    this->pointBegin = point;
}

void Line::setEnd(Point* point)
{
    this->pointEnd = point;
}

Point* Line::getBegin()
{
    return this->pointBegin;
}

Point* Line::getEnd()
{
    return this->pointEnd;
}

double Line::Length()
{
    return this->pointBegin->Distance(*(this->pointEnd));
}