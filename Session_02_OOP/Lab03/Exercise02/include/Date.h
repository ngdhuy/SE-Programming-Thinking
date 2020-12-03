/**
 * Created by NDHuy on 03/12/2020
 * Copyright 2020 by SEstudio
 * Date-time class
 **/ 

#include <iostream>

using namespace std; 

class Date
{
    private: 
        int day; 
        int month; 
        int year;

        long timeStamp;

    public:
        Date(); 
        Date(int day, int month, int year);

        ~Date();

        // Getter
        int getDay();
        int getMonth();
        int getYear();
        long getTimeStamp();

        // Setter
        void setDay(int value);
        void setMonth(int value);
        void setYear(int value);
        void setTimeStamp(int day, int month, int year);
        void setTimeStamp(long value);

        bool isLeapYear(int year);
        int getNumDayOfYear(int day, int month, int year);
        
        Date& operator++();
        Date  operator++(int);
        Date& operator--();
        Date  operator--(int);

        Date& operator+(const Date& date);
        Date& operator-(const Date& date);

        bool operator==(const Date& date);
        bool operator!=(const Date& date);
        bool operator<(const Date& date);
        bool operator<=(const Date& date);
        bool operator>(const Date& date);
        bool operator>=(const Date& date);

        friend ostream& operator<<(ostream& os, Date& date);
        friend istream& operator>>(istream& is, Date& date);
};