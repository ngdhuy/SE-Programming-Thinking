//
//  Created by NDHuy on 16/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to OOP - Object Oriented Programming
//

#include "cat.h"

Animal::Cat::Cat()
{
    this->Name = "No name";
    this->Color = "No color";
}

Animal::Cat::Cat(const string Name, const string Color)
{
    this->Name = Name;
    this->Color = Color;
}

Animal::Cat::Cat(const Cat &cat)
{
    this->Name = cat.Name;
    this->Color = cat.Color;
}

Animal::Cat::~Cat()
{

}

void Animal::Cat::SetName(const string Name)
{
    this->Name = Name;
}

void Animal::Cat::SetColor(const string Color)
{
    this->Color = Color;
}

string Animal::Cat::GetName()
{
    return this->Name;
}

string Animal::Cat::GetColor()
{
    return this->Color;
}

void Animal::Cat::Move()
{
    cout << this->Name << " is moving" << endl;
}

void Animal::Cat::Sound()
{
    cout << this->Name << " with color " << this->Color << " is sounding" << endl;
}