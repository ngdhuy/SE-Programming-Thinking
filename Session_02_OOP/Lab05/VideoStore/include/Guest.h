/**
 * Created on 15/01/2021 
*/

#ifndef __GUEST_H__
#define __GUEST_H__

#include <iostream>
#include <string>

#include "Account.h"

#pragma once 

#define MAX_BORROW_VIDEO 2
#define NUM_RETURN_SUCCESS_TO_PROMOTE 3

using namespace std;

class Guest : public Account
{
    private:
        int numberOfReturnSuccess;

    public:
        Guest(); 
        Guest(AccountID* id, string name, string address, string phone);
        Guest(string id, string name, string address, string phone);
        ~Guest();

        int getNumberOfReturnSuccess();
        bool isPromoteAccount();

        bool returnVideo(string videoID);
        bool borrowVideo(string videoID);
};

#endif //__GUEST_H__