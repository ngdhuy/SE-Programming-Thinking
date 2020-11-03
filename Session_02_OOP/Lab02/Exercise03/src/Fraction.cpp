//
//  Created by NDHuy on 21/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to OOP (cont.) - Object Oriented Programming
//

#include "Fraction.h"

// default constructor
Fraction::Fraction()
{
    this->numerator = 0;
    this->denominator = 1;
}

// constructor with parameters
Fraction::Fraction(const int& numerator, const int& denominator)
{
    this->numerator = numerator;
    if (denominator == 0)
    {
        this->denominator = 1;
    }
    else
    {
        this->denominator = denominator;
    }
}

// copy constructor
Fraction::Fraction(const Fraction& fraction)
{
    this->numerator = fraction.numerator;
    this->denominator = fraction.denominator;
}

// Destructor
Fraction::~Fraction(){}

// Getter
int Fraction::GetNumerator()
{
    return this->numerator;
}

int Fraction::GetDenominator()
{
    return this->denominator;
}

// Setter
void Fraction::SetNumerator(const int& value)
{
    this->numerator = value;
}

void Fraction::SetDenominator(const int& value)
{
    if (value != 0)
    {
        this->denominator = value;
    }
}

// Business
string Fraction::ToString()
{
    string result = to_string(this->numerator) + "/" + to_string(this->denominator);

    return result;
}

void Fraction::Optimize()
{
    int commonDivisor;
    
    // find Common Divisor bettween numerator and denominator
    int tempNumerator = this->numerator;
    int tempDenominator = this->denominator;
    while(tempNumerator != 0 && tempDenominator != 0)
    {
        if(tempNumerator > tempDenominator)
            tempNumerator -= tempDenominator;
        else
            tempDenominator -= tempNumerator;
    }
    commonDivisor = tempNumerator + tempDenominator;

    this->numerator /= commonDivisor;
    this->denominator /= commonDivisor;
}

Fraction& Fraction::Add(const Fraction& fraction)
{
    Fraction* result = new Fraction();
    
    result->numerator = (this->numerator * fraction.denominator) + (this->denominator * fraction.numerator);
    result->denominator =  this->denominator * fraction.denominator;

    result->Optimize();

    return *result;
}

Fraction& Fraction::Sub(const Fraction& fraction)
{
    Fraction* result = new Fraction();
    
    result->numerator = (this->numerator * fraction.denominator) - (this->denominator * fraction.numerator);
    result->denominator =  this->denominator * fraction.denominator;

    result->Optimize();

    return *result;
}

Fraction& Fraction::Mul(const Fraction& fraction)
{
    Fraction* result = new Fraction();
    
    result->numerator = this->numerator * fraction.numerator;
    result->denominator =  this->denominator * fraction.denominator;

    result->Optimize();

    return *result;
}

Fraction& Fraction::Div(const Fraction& fraction)
{
    Fraction* result = new Fraction();
    if(fraction.numerator == 0)
    {
        cout << endl << "Error division 0" << endl;
        return *result;
    }
    
    result->numerator = this->numerator * fraction.denominator;
    result->denominator =  this->denominator * fraction.numerator;

    result->Optimize();

    return *result;
}

// Operator - 2 parameters
Fraction& Fraction::operator+(const Fraction& fraction)
{
    Fraction* result = new Fraction();
    
    result->numerator = (this->numerator * fraction.denominator) + (this->denominator * fraction.numerator);
    result->denominator =  this->denominator * fraction.denominator;

    result->Optimize();

    return *result;
}

Fraction& Fraction::operator-(const Fraction& fraction)
{
    Fraction* result = new Fraction();
    
    result->numerator = (this->numerator * fraction.denominator) - (this->denominator * fraction.numerator);
    result->denominator =  this->denominator * fraction.denominator;

    result->Optimize();

    return *result;
}

Fraction& Fraction::operator*(const Fraction& fraction)
{
    Fraction* result = new Fraction();
    
    result->numerator = this->numerator * fraction.numerator;
    result->denominator =  this->denominator * fraction.denominator;

    result->Optimize();

    return *result;
}

Fraction& Fraction::operator/(const Fraction& fraction)
{
    Fraction* result = new Fraction();
    if(fraction.numerator == 0)
    {
        cout << endl << "Error division 0" << endl;
        return *result;
    }
    
    result->numerator = this->numerator * fraction.denominator;
    result->denominator =  this->denominator * fraction.numerator;

    result->Optimize();

    return *result;
}

// Operator - 0 parameter
// Define prefix increment operator -> ++frac
Fraction& Fraction::operator++()
{
    this->numerator += this->denominator;
    
    this->Optimize();
    
    return *this;
}

// Define postfix increment operator -> frac++
Fraction Fraction::operator++(int)
{
    Fraction result = *this;
    ++(*this);
    
    result.Optimize();
    
    return result;
}

// Define prefix decrement operator -> --frac
Fraction& Fraction::operator--()
{
    this->numerator -= this->denominator;
    
    this->Optimize();
    
    return *this;
}

// Define postfix decrement operator -> frac--
Fraction Fraction::operator--(int)
{
    Fraction result = *this;
    --(*this);
    
    result.Optimize();
    
    return result;
}

// Operator - 1 parameter
Fraction& Fraction::operator+=(const Fraction& fraction)
{
    *this = *this + fraction;
    
    this->Optimize();
    
    return *this;
}

Fraction& Fraction::operator-=(const Fraction& fraction)
{
    *this = *this - fraction;
    
    this->Optimize();
    
    return *this;
}

Fraction& Fraction::operator*=(const Fraction& fraction)
{
    *this = *this * fraction;
    
    this->Optimize();
    
    return *this;
}

Fraction& Fraction::operator/=(const Fraction& fraction)
{
    if(fraction.numerator != 0)
        *this = *this / fraction;
    
    this->Optimize();

    return *this;
}

// Compare Operators
bool Fraction::operator==(const Fraction& fraction)
{
    return (this->numerator * fraction.denominator) == (this->denominator * fraction.numerator);
}

bool Fraction::operator!=(const Fraction& fraction)
{
    return (this->numerator * fraction.denominator) != (this->denominator * fraction.numerator);
}

bool Fraction::operator<(const Fraction& fraction)
{
    return (this->numerator * fraction.denominator) < (this->denominator * fraction.numerator);
}

bool Fraction::operator<=(const Fraction& fraction)
{
    return (this->numerator * fraction.denominator) <= (this->denominator * fraction.numerator);
}

bool Fraction::operator>(const Fraction& fraction)
{
    return (this->numerator * fraction.denominator) > (this->denominator * fraction.numerator);
}

bool Fraction::operator>=(const Fraction& fraction)
{
    return (this->numerator * fraction.denominator) >= (this->denominator * fraction.numerator);
}

// Assignment Operator
Fraction& Fraction::operator=(const Fraction& fraction)
{
    if(this != &fraction)
    {
        this->numerator = fraction.numerator;
        this->denominator = fraction.denominator;
    }

    return *this;
}

Fraction& Fraction::operator=(const int& number)
{
    this->numerator = number;
    this->denominator = 1;

    return *this;
}

// Streaming Operator output stream <<, inputstream >>
ostream& operator<<(ostream& os, Fraction& fraction)
{
    os << fraction.ToString();
    return os;
}

istream& operator>>(istream& is, Fraction& fraction)
{
    int value; 
    
    cout << "Enter numerator: ";
    is >> value;
    fraction.SetNumerator(value);
    
    cout << "Enter denominator: ";
    is >> value;
    fraction.SetDenominator(value);
    
    return is;
}