/**
 * Created by NDHuy on 17/11/2020
 * Copyright 2020 by SEstudio
 * Inherited in OOP
 **/ 

#include "Cat.h"

Cat::Cat() : Animal()
{
    this->color = "No color";
}

Cat::Cat(string color) : Animal()
{
    this->color = color;
}

Cat::Cat(int id, string name, string color) : Animal(id, name)
{
    this->color = color;
}

Cat::Cat(Cat& cat) : Animal()
{
    this->color = cat.color;
    this->setID(cat.getID());
    this->setName(cat.getName());
}

Cat::~Cat() { }

string Cat::getColor()
{
    return this->color;
}

void Cat::setColor(string color)
{
    this->color = color;
}

void Cat::Run()
{
    cout << "Cat is Running" << endl;
}

void Cat::MakeSound()
{
    cout << "Meo meo" << endl;
}