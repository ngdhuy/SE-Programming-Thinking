/**
 * Created by NDHuy on 24/11/2020
 * Copyright 2020 by SEstudio
 * Inherited in OOP
 **/ 

#include <iostream>
#include <string>
#include "Animal.h"

#pragma once

using namespace std;

class Dog : public Animal
{
    private: 
        string breed;
        int size;

    public:
        Dog();
        Dog(string breed, int size);
        Dog(int id, string name, string breed, int size);
        Dog(Dog &dog);

        void setBreed(string breed); 
        void setSize(int size);

        string getBreed();
        int getSize();

        void Run();
        void MakeSound();
};