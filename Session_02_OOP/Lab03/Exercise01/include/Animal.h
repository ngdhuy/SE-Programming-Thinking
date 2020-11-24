/**
 * Created by NDHuy on 17/11/2020
 * Copyright 2020 by SEstudio
 * Inherited in OOP
 **/ 

#include <iostream>
#include <string>

#pragma once

using namespace std;

class Animal 
{
    private:
        int id; 
        string name;

    public:
        Animal(); 
        Animal(int id, string name);
        Animal(const Animal& animal);
        ~Animal();

        int getID(); 
        string getName(); 

        void setID(int id); 
        void setName(string name);

        virtual void Run();
        virtual void MakeSound() = 0;
};