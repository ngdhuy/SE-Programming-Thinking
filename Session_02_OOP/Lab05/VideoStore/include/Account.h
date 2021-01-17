/**
 * Created on 15/01/2021 
*/

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include <iostream>
#include <string>

#include "AccountID.h"

#pragma once

#define MAX 100

using namespace std;

class Account
{
    private:
        AccountID* id;
        string name; 
        string address; 
        string phone; 

        string type;

        string listRentalID[MAX];
        int nRentalID;

    public:
        Account();
        Account(AccountID* id, string name, string address, string phone, string type);
        Account(string id, string name, string address, string phone, string type);
        Account(const Account& account);
        ~Account();

        void setID(AccountID* id);
        void setName(string name);
        void setAddress(string address);
        void setPhone(string phone);
        void setType(string type);
        void setListRental(const string listRentalID[], const int nRentalID);

        AccountID* getID();
        string getName();
        string getAddress();
        string getPhone();
        string getType();
        void getListRental(string listRentalID[], int& nRentalID);
        int getNumOfRetalID();

        bool isListVideoEmpty();
        bool isExistVideo(string videoID);
        bool addVideo(string videoID);
        bool removeVideo(string videoID);
        string toString();
        string getAccoutInfo();
         
        virtual bool returnVideo(string videoID) = 0;
        virtual bool borrowVideo(string videoID) = 0;
};

#endif // __ACCOUNT_H__