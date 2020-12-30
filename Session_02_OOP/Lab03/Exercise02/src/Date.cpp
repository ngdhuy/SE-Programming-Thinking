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

void Date::setTimeStamp(int day, int month, int year)
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
    if(0 > value)
        return;

    this->timeStamp = value;
    this->year = (value / 365) - 1;
    int leafYear = 0; 
    for(int i = this->year; i > 0; i--)
        if(isLeapYear(i))
            leafYear++;
    cout << leafYear << endl;        
    value = value % 365;
    cout << value << endl;
}

void Date::setDate(int day, int month, int year)
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

bool Date::isLeapYear(int year)
{
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

int Date::getNumDayOfYear(int day, int month, int year)
{
    int numDayOfMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int value = day; 
    for(int i = 1; i < month; i++)
        value += numDayOfMonth[i];

    if(month > 2 && this->isLeapYear(year))
        value += 1;
        
    return value;
}

// ++date
Date& Date::operator++()
{
    this->timeStamp++;
    this->setTimeStamp(this->timeStamp);
    return *this;
}

// date++
Date Date::operator++(int)
{
    Date result = *this;
    ++(*this);
    return result;
}

// --date
Date& Date::operator--()
{
    this->timeStamp--;
    this->setTimeStamp(this->timeStamp);
    return *this;
}

//  date--
Date Date::operator--(int)
{
    Date result = *this;
    --(*this);
    return result;
}

Date& Date::operator+(const Date& date)
{
    Date* result;
    result->setTimeStamp(this->timeStamp + date.timeStamp);
    return *result;
}

Date& Date::operator-(const Date& date)
{
    Date* result; 
    result->setTimeStamp(this->timeStamp - date.timeStamp);
    return *result;
}

bool Date::operator==(const Date& date)
{
    return this->timeStamp == date.timeStamp;
}

bool Date::operator!=(const Date& date)
{
    return this->timeStamp != date.timeStamp;
}

bool Date::operator<(const Date& date)
{
    return this->timeStamp < date.timeStamp;
}

bool Date::operator<=(const Date& date)
{
    return this->timeStamp <= date.timeStamp;
}

bool Date::operator>(const Date& date)
{
    return this->timeStamp >= date.timeStamp;
}

bool Date::operator>=(const Date& date)
{
    return this->timeStamp > date.timeStamp;
}

string Date::toString()
{
    return to_string(this->day) + "/" + to_string(this->month) + "/" + to_string(this->year);
}

ostream& operator<<(ostream& os, Date& date)
{
    os << date.day << "/" << date.month << "/" << date.year;
    return os;
}

istream& operator>>(istream& is, Date& date)
{
    int day; 
    int month; 
    int year; 
    cout << "Enter day = ";
    is >> day; 
    cout << "Enter month = ";
    is >> month; 
    cout << "Enter year = ";
    is >> year;

    date.setDate(day, month, year);
    return is;
}