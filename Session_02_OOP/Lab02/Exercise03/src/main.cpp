//
//  Created by NDHuy on 21/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to OOP (cont.) - Object Oriented Programming
//

#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
    Fraction *frac_1 = new Fraction(10, 8);
    Fraction *frac_2 = new Fraction(3, 4);
    
    cout << *frac_1 << " - " << *frac_2 << endl;

    Fraction *frac_3 = new Fraction();
    Fraction *frac_4 = new Fraction();

    cin >> *frac_3 >> *frac_4;
    cout << *frac_3 << endl << *frac_4 << endl;

    Fraction frac_5, frac_6;
    frac_5 = *(frac_3->Add(*frac_4));
    frac_6 = *(*frac_3 + *frac_4);

    cout << frac_5 << endl << frac_6 << endl;

    return 0;
}