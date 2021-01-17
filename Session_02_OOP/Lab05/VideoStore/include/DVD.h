/**
 * Created on 11/01/2021 
*/

#ifndef __DVD_H__
#define __DVD_H__

#pragma once

#include <iostream>
#include <string>
#include "Video.h"

class DVD : public Video
{
    private: 
        string genres;

    public:
        DVD();
        DVD(string genres);
        DVD(ID id, string title, string rentalType, string loanType, int inStock, float fee, string genres);
        DVD(string id, string title, string rentalType, string loanType, int inStock, float fee, string genres);

        ~DVD();

        void setGenres(string genres);
        
        string getGenres();

        string toString();
};

#endif // __DVD_H__