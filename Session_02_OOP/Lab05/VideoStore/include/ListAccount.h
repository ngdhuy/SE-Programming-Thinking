/**
 * Created on 11/01/2021 
*/

#ifndef __LISTACCOUNT_H__
#define __LISTACCOUNT_H__

#include <iostream>
#include <string>
#include <fstream>

#include "Account.h"
#include "Guest.h"
#include "Regular.h"
#include "VIP.h"

#include "Lib.h"

#pragma once

using namespace std;

class ListAccount
{
    private:
        Account* listAccount[MAX];
        int size;

    public:
        ListAccount(); 
        ListAccount(Account* listAccount[]); 
        ~ListAccount();
        
        int getSize();

        void Add(Account* account);
        int Find(Account* account);
        void Remove(Account* account);

        void LoadFromFile(string fileName);
        
        void PrintAllAccountInfo();
        void PrintGuestAccount();
        void PrintRegularAccount();
        void PrintVIPAccount();

        void PrintGroupOfAccount();
};

#endif // __LISTACCOUNT_H__