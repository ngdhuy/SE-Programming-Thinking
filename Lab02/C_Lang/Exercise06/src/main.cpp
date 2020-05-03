//
//  Created by NDHuy at 03/05/2020
//  Copyright 2020 by SEstudio
//  15CTT31-BaiTapLyThuyet-04.pdf: Bai 5, 6, 7
//  

#include <stdio.h>
#include "lib.h"

int main()
{
    int day; 
    int month; 
    int year;
    Input(day, month, year);
    printf("%d/%d/%d \n", day, month, year);
    printf("Day of Year: %d \n", getDayOfYear(day, month, year));
    printf("Day of Anno Domini: %d \n", getDayOfAnnoDomini(day, month, year));
    PrintNumOfWeek(day, month, year);
    return 0;
}