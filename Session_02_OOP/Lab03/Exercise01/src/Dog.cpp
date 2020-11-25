/**
 * Created by NDHuy on 24/11/2020
 * Copyright 2020 by SEstudio
 * Inherited in OOP
 **/ 

#include "Dog.h"

Dog::Dog() : Animal()
{
    this->breed = "Nothing";
    this->size = 0;
}

Dog::Dog(string breed, int size) : Animal()
{
    this->breed = breed; 
    this->size = size;
}

Dog::Dog(int id, string name, string breed, int size) : Animal(id, name)
{
    this->breed = breed; 
    this->size = size;
}

Dog::Dog(Dog& dog)
{
    this->breed = dog.breed;
    this->size = dog.size;

    this->setID(dog.getID());
    this->setName(dog.getName());
}

void Dog::setBreed(string breed)
{
    this->breed = breed;
}

void Dog::setSize(int size)
{
    this->size = size;
}

string Dog::getBreed()
{
    return this->breed;
}

int Dog::getSize()
{
    return this->size;
}

void Dog::Run()
{
    cout << "Dog is Running" << endl;
}

void Dog::MakeSound()
{
    cout << "Gau gau" << endl;
}