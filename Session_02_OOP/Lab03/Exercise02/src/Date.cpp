/**
 * Created by NDHuy on 03/12/2020
 * Copyright 2020 by SEstudio
 * Date-time class
 **/ 

#include "Date.h"

Date::Date()
{
    this->day = 1; 
    this->month = 1;
    this->year = 1; 

    this->timeStamp = 0;
}

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month; 
    this->year = year; 

    this->timeStamp = 0; 
    for(int i = 1; i < this->year; i++)
    {
        if(isLeapYear(i) == true)
            this->timeStamp += 366;
        else
            this->timeStamp += 365;
    }

    this->timeStamp += getNumDayOfYear(day, month, year);
}

Date::~Date(){}

int Date::getDay()
{
    return this->day;
}

int Date::getMonth()
{
    return this->month;
}

int Date::getYear()
{
    return this->year;
}

long Date::getTimeStamp()
{
    return this->timeStamp;
}

void Date::setDay(int value)
{
    if(0 < value)
    {
        switch (this->month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(value <= 31)
                this->day = value;
            break;
        
        case 4:
        case 6:
        case 9:
        case 11:
            if(value <= 30)
                this->day = value;
            break;
        
        case 2:
            if(isLeapYear(this->year) == true)
            {
                if(value <= 29)
                    this->day = value;   
            }
            else
            {
                if(value <= 28)
                    this->day = value;
            }
            break;
        }
    }
        
}

void Date::setMonth(int value)
{
    if(0 < value && value < 13)
        this->month = value;
}

void Date::setYear(int value)
{
    if(0 < value)
        this->year = value;
}

void Date::setTImeStamp(int day, int month, int year)
{
    this->day = day;
    this->month = month; 
    this->year = year; 

    this->timeStamp = 0; 
    for(int i = 1; i < this->year; i++)
    {
        if(isLeapYear(i) == true)
            this->timeStamp += 366;
        else
            this->timeStamp += 365;
    }

    this->timeStamp += getNumDayOfYear(day, month, year);
}

void Date::setTimeStamp(long value)
{
    if(0 < value)
        this->timeStamp = value;

    this->year = value / 365;

    value = (value % 365) - (this->year / 4);

    this->month = value / 30;
    value = value % 30;

    if(isLeapYear(this->year))
    {
        if(this->month > 2)
            value += 1;
    }
    else
    {
        if(this->month > 2)
            value += 2;
    }
    

    switch (this->month)
    {
        case 3:
            value -= 1;
            break;
        case 5:
            value -= 2;
            break;
        case 7:
            value -= 3;
            break;
        case 8:
            value -= 4;
            break;
        case 10:
            value -= 5;
            break;
        case 12:
            value -= 6;
            break;
    }

    this->day = value;
}

bool Date::isLeapYear(int year)
{
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

int Date::getNumberOfYear(int day, int month, int year)
{
    int numDayOfMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int value = 0; 
    for(int i = 1; i <= month; i++)
        value += numDayOfMonth[i];

    if(month > 2 && this->isLeapYear(year))
        value += 1;
        
    return value;
}