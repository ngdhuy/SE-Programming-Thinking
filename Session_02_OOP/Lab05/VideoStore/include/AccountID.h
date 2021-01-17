/**
 * Created on 15/01/2021 
*/

#ifndef __ACCOUNTID_H__
#define __ACCOUNTID_H__

#pragma once

#include <iostream>
#include <string>

using namespace std;

class AccountID 
{
    private:
        string xxx; 

    public:
        AccountID();
        AccountID(int xxx);
        AccountID(const AccountID& id);
        AccountID(const string id);
        ~AccountID();

        void setXXX(int xxx);

        string getXXX();

        string toString();

        bool operator==(const AccountID& id);
        bool operator==(const string& id);
        AccountID& operator=(const AccountID& id);
};

#endif // __ACCOUNTID_H__