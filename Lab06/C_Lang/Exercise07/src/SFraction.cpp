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

#include "SFraction.h"

SFraction Input()
{
    SFraction frac;

    printf("Enter nummerator: ");
    scanf("%d", &frac.nummerator);

    printf("Enter donominator: ");
    scanf("%d", &frac.denominator);

    return frac;
}

void Output(const SFraction frac)
{
    printf("%d/%d\n", frac.nummerator, frac.denominator);
}

int HighestCommonFactor(int a, int b)
{
    while(a != 0 && b != 0)
    {
        if(a > b)
            a = a - b;
        else 
            b = b - a;
    }

    return a + b;
}

void Optimize(SFraction &frac)
{
    int hcf = HighestCommonFactor(frac.nummerator, frac.denominator);
    frac.nummerator /= hcf;
    frac.denominator /= hcf;
}

SFraction Sum(const SFraction a, const SFraction b)
{
    SFraction result;

    result.nummerator = (a.nummerator * b.denominator) + (b.nummerator * a.denominator);
    result.denominator = a.denominator * b.denominator;

    return result;
}

SFraction Sub(const SFraction a, const SFraction b)
{
    SFraction result;

    result.nummerator = (a.nummerator * b.denominator) - (b.nummerator * a.denominator);
    result.denominator = a.denominator * b.denominator;
    
    return result;
}

SFraction Mul(const SFraction a, const SFraction b)
{
    SFraction result;

    result.nummerator = a.nummerator * b.nummerator;
    result.denominator = a.denominator * b.denominator;
    
    return result;
}

SFraction Div(const SFraction a, const SFraction b)
{
    SFraction result = {0, 1};
    
    if(b.nummerator != 0)
    {
        result.nummerator = a.nummerator * b.denominator;
        result.denominator = a.denominator * b.nummerator;
    }

    return result;
}

bool IsOptimize(const SFraction frac)
{
    SFraction temp = frac;
    Optimize(temp);
    
    if(temp.nummerator == frac.nummerator && temp.denominator == frac.denominator)
        return true;
    else
        return false;
}