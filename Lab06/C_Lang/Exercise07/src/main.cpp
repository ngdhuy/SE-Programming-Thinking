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

#include <stdio.h>
#include "SFraction.h"

int main()
{
    // SFraction frac_01 = Input();
    // Output(frac_01);

    SFraction frac_02 = {6, 9};
    Output(frac_02);

    Optimize(frac_02);
    Output(frac_02);

    SFraction frac_03 = {6, 7};
    SFraction a = Sum(frac_02, frac_03);
    Optimize(a);
    Output(a);

    return 0;
}