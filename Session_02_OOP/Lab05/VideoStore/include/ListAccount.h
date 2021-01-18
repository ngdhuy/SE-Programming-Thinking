/**
 * Created on 11/01/2021 
*/

#ifndef __LISTACCOUNT_H__
#define __LISTACCOUNT_H__

#include <iostream>
#include <string>
#include <fstream>

#include "Video.h"
#include "DVD.h"
#include "Game.h"
#include "MovieRecord.h"
#include "ListVideo.h"

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
        int Find(AccountID* id);
        void Remove(Account* account);

        void LoadFromFile(string fileName);
        
        void PrintAllAccountInfo();
        void PrintGuestAccount();
        void PrintRegularAccount();
        void PrintVIPAccount();

        void PrintGroupOfAccount();

        void Action();

        void CreateGuest(); 
        void CreateRegular();
        void CreateVIP();

        void UpdateAccount();

        void PrintOneAccount(Account* account);
        
        void Borrow(ListVideo* listVideo);
        void Return(ListVideo* listVideo);

        void Promote();

        void SearchByID();
        void SearchByName();
};

#endif // __LISTACCOUNT_H__