/**
 * Created by NDHuy on 17/11/2020
 * Copyright 2020 by SEstudio
 * Inherited in OOP
 **/ 

#include <iostream>
#include <string>
#include "Animal.h"

#pragma once

using namespace std;

class Cat : public Animal
{
    private: 
        string color;

    public:
        Cat();
        Cat(string color);
        Cat(int id, string name, string color);
        Cat(Cat& cat);
        ~Cat();

        string getColor(); 
        void setColor(string color);

        void Run();
        void MakeSound();
};