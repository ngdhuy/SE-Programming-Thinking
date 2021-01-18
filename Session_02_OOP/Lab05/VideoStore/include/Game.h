/**
 * Created on 11/01/2021 
*/

#ifndef __Game_H__
#define __Game_H__

#pragma once

#include <iostream>
#include <string>
#include "Video.h"

class Game : public Video
{
    private:

    public:
        Game();
        Game(ID id, string title, string rentalType, string loanType, int inStock, float fee);
        Game(string id, string title, string rentalType, string loanType, int inStock, float fee);

        ~Game();

        string toString();
        void Input();
};

#endif