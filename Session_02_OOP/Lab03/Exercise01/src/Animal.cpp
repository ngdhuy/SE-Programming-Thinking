/**
 * Created by NDHuy on 17/11/2020
 * Copyright 2020 by SEstudio
 * Inherited in OOP
 **/ 

#include "Animal.h"

Animal::Animal()
{
    this->id = 0;
    this->name = "Anonymous";
}

Animal::Animal(int id, string name)
{
    this->id = id;
    this->name = name;
}

Animal::Animal(const Animal& animal)
{
    this->id = animal.id; 
    this->name = animal.name;
}

Animal::~Animal() { }

int Animal::getID()
{
    return this->id;
}

string Animal::getName()
{
    return this->name; 
}

void Animal::setID(int id)
{
    this->id = id;
}

void Animal::setName(string name)
{
    this->name = name;
}

void Animal::Run()
{
    cout << "Animal is running" << endl;
}