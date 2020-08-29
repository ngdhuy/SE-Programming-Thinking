//
//  Created by NDHuy on 29/08/2020
//  Copyright 2020 by SEstudio
//  Exercise: define Struct PhanSo
//      - Khai báo kiểu phân số
//      - Nhập/xuất phân số
//      - Rút gọn phân số
//      - Tính tổng, hiệu, tích, thương 02 phân số
//      - Kiểm tra phân số tối giản
//      - Quy đồng 02 phân số
//      - Kiểm tra phân số dương hay âm
//      - So sánh 02 phân số
//

#ifndef __SFRACTION_H__
#define __SFRACTION_H__

#include <stdio.h>

typedef struct Fraction
{
    int nummerator;
    int denominator;
} SFraction;

SFraction Input();
void Output(const SFraction frac);
void Optimize(SFraction &frac);

int HighestCommonFactor(int a, int b);

SFraction Sum(const SFraction a, const SFraction b);
SFraction Sub(const SFraction a, const SFraction b);
SFraction Mul(const SFraction a, const SFraction b);
SFraction Div(const SFraction a, const SFraction b);
bool IsOptimize(const SFraction frac);

#endif //!__SFRACTION_H__