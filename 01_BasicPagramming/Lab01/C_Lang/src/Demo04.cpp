//
//  Created by NDHuy on 04/05/2020
//  Copyright 2020 by SEstudio
//  Input one integer number, which is the number of year.
//  Check this year is Leap year?
//

#include <stdio.h>

int main()
{
    int year;
    printf("Input a number of year: ");
    scanf("%d", &year);

    bool flagLeapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

    if (flagLeapYear)    
        printf("%d is leap year\n", year);
    else 
        printf("%d is NOT leap year\n", year);

    return 0;
}