//
//  Created by NDHuy on 16/10/2020
//  Copyright 2020 by SEstudio
//  Introduce to OOP - Object Oriented Programming
//

#include <iostream>
#include <string>

#pragma once

using namespace std;

namespace Animal
{
    class Cat 
    {
        private: // Attributes of Class
            string Name;
            string Color;

        public: // Methods of Class
            
            // Constructor method
            Cat(); // default constructor
            Cat(const string Name, const string Color); // constructor with parameter
            Cat(const Cat &cat); // copy constructor

            // Destructor method
            ~Cat();

            // Setter
            void SetName(const string Name);
            void SetColor(const string Color);

            // Getter
            string GetName();
            string GetColor();

            // BUS method
            void Move();
            void Sound();
    };
};