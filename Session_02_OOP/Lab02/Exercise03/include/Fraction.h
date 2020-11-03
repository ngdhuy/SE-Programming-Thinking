//
//  Created by NDHuy on 21/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to OOP (cont.) - Object Oriented Programming
//

#include <iostream>
#include <string>

#pragma once

using namespace std;

class Fraction
{
    // Attributes
    private:
        int numerator;      // Tử số
        int denominator;    // Mẫu số

    // Methods
    public:
        // Constructor
        Fraction();                                             // default constructor
        Fraction(const int &numerator, const int &denominator);   // constructor with paramters
        Fraction(const Fraction &fraction);                     // copy constructor

        // Destructor
        ~Fraction();

        // Getter
        int GetNumerator();
        int GetDenominator();

        // Setter
        void SetNumerator(const int &value);
        void SetDenominator(const int &value);

        // Business
        string ToString();
        Fraction* Add(const Fraction &fraction);
        Fraction* Sub(const Fraction &fraction);
        Fraction* Mul(const Fraction &fraction);
        Fraction* Div(const Fraction &fraction);

        // Operator - 2 parameter
        Fraction* operator+(Fraction &fraction);
        Fraction* operator-(Fraction &fraction);
        Fraction* operator*(Fraction &fraction);
        Fraction* operator/(Fraction &fraction);

        void optimize();

        // Streaming Operator output stream <<, inputstream >>
        friend ostream& operator<<(ostream &os, Fraction &fraction);
        friend istream& operator>>(istream &is, Fraction &fraction);
};