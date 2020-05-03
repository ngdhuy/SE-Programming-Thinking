//
//  Created by NDHuy at 03/05/2020
//  Copyright 2020 by SEstudio
//  15CTT31-BaiTapLyThuyet-04.pdf: Bai 5, 6, 7
//  

#ifndef __LIB_H__
#define __LIB_H__

#include <stdio.h>

void Input(int &day, int &month, int &year);
bool isLeapYear(const int &year);
int maxDayOfMonth(const int &month, const int &year);
int maxDayOfYear(const int &year);
int getDayOfYear(const int &day, const int &month, const int &year);
int getDayOfAnnoDomini(const int &day, const int &month, const int &year);
int getNumOfWeek(const int &day, const int &month, const int &year);
void PrintNumOfWeek(const int &day, const int &month, const int &year);

#endif