/**
 * Created on 15/01/2021 
*/

#ifndef __REGULAR_H__
#define __REGULAR_H__

#include <iostream>
#include <string>

#include "Account.h"

#pragma once 

#define NUM_RETURN_SUCCESS_TO_PROMOTE_VIP 3

using namespace std;

class Regular : public Account
{
    private:
        int numberOfReturnSuccess;

    public:
        Regular(); 
        Regular(AccountID* id, string name, string address, string phone);
        Regular(string id, string name, string address, string phone);
        ~Regular();

        int getNumberOfReturnSuccess();
        void setNumberOfReturnSuccess(int numberOfReturnSuccess);

        bool isPromoteAccount();

        bool returnVideo(string videoID);
        bool borrowVideo(string videoID);
};

#endif //__REGULAR_H__