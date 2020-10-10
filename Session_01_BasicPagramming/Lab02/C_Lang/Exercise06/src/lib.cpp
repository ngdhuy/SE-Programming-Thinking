//
//  Created by NDHuy at 03/05/2020
//  Copyright 2020 by SEstudio
//  15CTT31-BaiTapLyThuyet-04.pdf: Bai 5, 6, 7
//  

#include "lib.h"

void Input(int &day, int &month, int &year)
{
    do
    {
        printf("Enter num of day: ");
        scanf("%d", &day);
        if(day <= 0 || day > 31)
            printf("Day must be greater than ZERO and less than 31. Please, try again\n");
    } while (day <= 0 || day > 31);
    
    do
    {
        printf("Enter num of month: ");
        scanf("%d", &month);
        if(month <= 0 || month > 12)
            printf("Month must be between 1 and 12. Please, try again\n");
    } while (month <= 0 || month > 12);

    do
    {
        printf("Enter num of year: ");
        scanf("%d", &year);
        if(year <= 0)
            printf("Month must be greater than ZERO. Please, try again\n");
    } while (year <= 0);
}

bool isLeapYear(const int &year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int maxDayOfMonth(const int &month, const int &year)
{
    int day; 

    switch (month)
    {
        case 1:
        case 3: 
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day = 31;
            break;
        case 4:
        case 6:
        case 9: 
        case 11:
            day = 30;
            break;
        case 2:
            if(isLeapYear(year))
                day = 29;
            else
                day = 28;
    }

    return day;
}

int maxDayOfYear(const int &year)
{
    return isLeapYear(year) ? 366: 365;
}

int getDayOfYear(const int &day, const int &month, const int &year)
{
    int numOfDay = 0;
    for(int i = 1; i < month; i++)
    {
        numOfDay += maxDayOfMonth(i, year);
    }
    numOfDay += day;
    return numOfDay;
}

int getDayOfAnnoDomini(const int &day, const int &month, const int &year)
{
    int numOfDay = 0; 
    for(int i = 1; i < year; i++)
    {
        numOfDay += maxDayOfYear(i);
    }
    numOfDay += getDayOfYear(day, month, year);
    
    return numOfDay;
}

int getNumOfWeek(const int &day, const int &month, const int &year)
{
    int dayOfAnnoDomini = getDayOfAnnoDomini(day, month, year) % 7;
    return (dayOfAnnoDomini == 0) ? 8 : (dayOfAnnoDomini + 1); 
}

void PrintNumOfWeek(const int &day, const int &month, const int &year)
{
    int numOfWeek = getNumOfWeek(day, month, year);
    switch (numOfWeek)
    {
        case 2:
            printf("The day is Monday \n");
            break;
        case 3:
            printf("The day is Tuesday \n");
            break;
        case 4:
            printf("The day is Wednesday \n");
            break;
        case 5:
            printf("The day is Thursday \n");
            break;
        case 6:
            printf("The day is Friday \n");
            break;
        case 7:
            printf("The day is Saturday \n");
            break;
        case 8:
            printf("The day is Sunday \n");
            break;
    }
}