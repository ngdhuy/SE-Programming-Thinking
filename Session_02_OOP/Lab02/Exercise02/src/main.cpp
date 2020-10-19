//
//  Created by NDHuy on 19/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to OOP (cont.) - Object Oriented Programming
//

#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
    Fraction frac_1;
    cout << "Frac_1 = " << frac_1.GetNumerator() << "/" << frac_1.GetDenominator() << endl;

    Fraction frac_2(3, 4);
    cout << "Frac_2 = " << frac_2.GetNumerator() << "/" << frac_2.GetDenominator() << endl;

    Fraction frac_3(frac_1);
    cout << "Frac_3 = " << frac_3.GetNumerator() << "/" << frac_3.GetDenominator() << endl;

    Fraction* frac_4 = new Fraction();
    cout << "Frac_4 = " << frac_4->GetNumerator() << "/" << frac_4->GetDenominator() << endl;

    Fraction* frac_5 = new Fraction(6, 9);
    cout << "Frac_5 = " << frac_5->GetNumerator() << "/" << frac_5->GetDenominator() << endl;   

    Fraction* frac_6 = new Fraction(*frac_5);
    cout << "Frac_6 = " << frac_6->ToString() << endl;

    Fraction* frac_7 = frac_6->Add(*frac_5);
    cout << "Frac_7 = Frac_6 + Frac_5 = " << frac_7->ToString() << endl;

    Fraction frac_8 = *frac_2.Add(frac_3);
    cout << "Frac_8 = Frac_2 + Frac_3 = " << frac_8.ToString() << endl;

    Fraction* frac_9 = frac_7->Sub(*frac_5);
    cout << "Frac_9 = Frac_7 - Frac_5 = " << frac_9->ToString() << endl;

    Fraction* frac_10 = frac_4->Mul(*frac_5);
    cout << "Frac_10 = Frac_4 * Frac_5 = " << frac_10->ToString() << endl;

    Fraction* frac_11 = frac_4->Div(*frac_6);
    cout << "Frac_11 = Frac_4 / Frac_6 = " << frac_11->ToString() << endl;

    Fraction* frac_12 = frac_6->Div(*frac_4);
    cout << "Frac_12 = Frac_6 / Frac_4 = " << frac_12->ToString() << endl;

    return 0;
}