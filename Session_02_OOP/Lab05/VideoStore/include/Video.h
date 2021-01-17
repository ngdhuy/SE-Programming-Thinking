/**
 * Created on 11/01/2021 
*/

#ifndef __VIDEO_H__
#define __VIDEO_H__

#pragma once

#include <iostream>
#include <string>
#include "ID.h"

using namespace std;

class Video 
{
    private:
        ID* id;
        string title;
        string rentalType;
        string loanType;
        int inStock;
        float fee;
        bool isAvailable;

    public:
        Video();
        Video(ID id, string title, string rentalType, string loanType, int inStock, float fee);
        Video(string id, string title, string rentalType, string loanType, int inStock, float fee);
        Video(const Video& video);
        ~Video();

        ID getID();
        string getTitle();
        string getRental();
        string getLoanType();
        int getInStock();
        float getFee();
        bool getIsAvailable();

        void setID(ID id);
        void setID(string id);
        void setTitle(string title);
        void setRental(string rentals);
        void setLoanType(string loan);
        void setInStock(int instock);
        void setFee(float fee);
        void setIsAvailable(bool isAvailable);

        virtual string toString() = 0;
};

#endif // __VIDEO_H__