/**
 * Created on 11/01/2021 
*/

#include "ListAccount.h"

ListAccount::ListAccount()
{
    this->size = 0;
}

ListAccount::ListAccount(Account* listAccount[])
{
    this->size = 0;
}

ListAccount::~ListAccount()
{
    this->size = 0;
}

int ListAccount::getSize()
{
    return this->size;
}

void ListAccount::Add(Account* account)
{
    this->listAccount[this->size++] = account;
}

int ListAccount::Find(Account* account)
{
    for(int i = 0; i < this->size; i++)
        if(this->listAccount[i] == account)
            return i;
    return -1;
}

void ListAccount::Remove(Account* account)
{
    for(int i = 0; i < this->size; i++)
    {
        if(this->listAccount[i] == account)
        {
            for(int j = i; j < this->size - 1; j++)
            {
                this->listAccount[i] = this->listAccount[i + 1];
            }
            this->size--;
        }
    }
}

void ListAccount::LoadFromFile(string fileName)
{
    fstream f(fileName, ios::in);
    if(f.is_open())
    {
        string line;
        while(getline(f, line))
        {
            if(line[0] == '#')
                continue;
            
            string sObject[MAX];
            int n;

            Split(line, ',', sObject, n);
            
            string accountType = sObject[5].substr(0, sObject[5].length());
            
            Account* object;
            if (accountType.compare("Guest") == 1)
            {
                object = new Guest(sObject[0], sObject[1], sObject[2], sObject[3]);
            }
            else if (accountType.compare("Regular") == 1)
            {
                object = new Regular(sObject[0], sObject[1], sObject[2], sObject[3]);
            }
            else if (accountType.compare("VIP") == 1)
            {
                object = new VIP(sObject[0], sObject[1], sObject[2], sObject[3]);
            }
            else
            {
                cout << accountType << endl;
                cout << "ERROR" << endl;
            }
            
            int numberOfRental = stoi(sObject[4]);
            if(numberOfRental != 0)
            {
                for(int i = 0; i < numberOfRental; i++)
                {
                    string videoID; 
                    getline(f, videoID);
                    object->addVideo(videoID);
                }
            }
            this->Add(object);
        }
        
        f.close();
    }
    else
    {
        cout << "Cannot access file " << fileName << endl;
    }   
}

void ListAccount::PrintAllAccountInfo()
{
    cout << "-- All Account --" << endl;
    for(int i = 0; i < this->size; i++)
    {
        cout << this->listAccount[i]->getAccoutInfo() << endl;
    }
}

void ListAccount::PrintGuestAccount()
{
    cout << "-- Guest Account --" << endl;
    for(int i = 0; i < this->size; i++)
    {
        if(this->listAccount[i]->getType() == "Guest")
            cout << this->listAccount[i]->getAccoutInfo() << endl;
    }
}

void ListAccount::PrintRegularAccount()
{
    cout << "-- Regular Account --" << endl;
    for(int i = 0; i < this->size; i++)
    {
        if(this->listAccount[i]->getType() == "Regular")
            cout << this->listAccount[i]->getAccoutInfo() << endl;
    }
}

void ListAccount::PrintVIPAccount()
{
    cout << "-- VIP Account --" << endl;
    for(int i = 0; i < this->size; i++)
    {
        if(this->listAccount[i]->getType() == "VIP")
            cout << this->listAccount[i]->getAccoutInfo() << endl;
    }
}

void ListAccount::PrintGroupOfAccount()
{
    int numChoose;
    cout << "--- Choose Group of Customer ---" << endl;
    cout << "\t 1. Guest Account" << endl;
    cout << "\t 2. Regular Account" << endl;
    cout << "\t 3. VIP Account" << endl;
    cout << "\t 4. All Accounts" << endl;
    cout << "=> Choose: ";
    cin >> numChoose;
    
    switch (numChoose)
    {
    case 1:
        this->PrintGuestAccount();
        break;
    case 2:
        this->PrintRegularAccount();
        break;
    case 3:
        this->PrintVIPAccount();
        break;
    case 4:
        this->PrintGuestAccount();
        this->PrintRegularAccount();
        this->PrintVIPAccount();
        break;
    }
}
