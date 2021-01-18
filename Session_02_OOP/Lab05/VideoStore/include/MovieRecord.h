/**
 * Created on 11/01/2021 
*/

#ifndef __MovieRecord_H__
#define __MovieRecord_H__

#pragma once

#include <iostream>
#include <string>
#include "Video.h"

class MovieRecord : public Video
{
    private: 
        string genres;

    public:
        MovieRecord();
        MovieRecord(string genres);
        MovieRecord(ID id, string title, string rentalType, string loanType, int inStock, float fee, string genres);
        MovieRecord(string id, string title, string rentalType, string loanType, int inStock, float fee, string genres);

        ~MovieRecord();

        void setGenres(string genres);
        
        string getGenres();

        string toString();
        void Input();
};

#endif