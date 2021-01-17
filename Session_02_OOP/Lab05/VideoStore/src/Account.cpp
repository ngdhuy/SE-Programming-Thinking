/**
 * Created on 15/01/2021 
*/

#include "Account.h"

Account::Account()
{
    this->id = new AccountID();
    this->name = "";
    this->address = "";
    this->phone = "";
    this->type = "";
    
    this->nRentalID = 0;
}

Account::Account(AccountID* id, string name, string address, string phone, string type)
{
    this->id = id; 
    this->name = name; 
    this->address = address; 
    this->phone = phone; 
    this->type = type;
    
    this->nRentalID = 0;
}

Account::Account(string id, string name, string address, string phone, string type)
{
    this->id = new AccountID(id);
    this->name = name; 
    this->address = address; 
    this->phone = phone; 
    this->type = type;

    this->nRentalID = 0;   
}

Account::Account(const Account& account)
{
    this->id = account.id; 
    this->name = account.name; 
    this->address = account.address; 
    this->phone = account.phone;
    
    this->nRentalID = account.nRentalID;
    for(int i = 0; i < this->nRentalID; i++)
        this->listRentalID[i] = account.listRentalID[i];
}

Account::~Account()
{
    delete this->id; 
    this->id = NULL; 

    this->nRentalID = 0;
}


void Account::setID(AccountID* id)
{
    this->id = id;
}

void Account::setName(string name)
{
    this->name = name;
}

void Account::setAddress(string address)
{
    this->address = address;
}

void Account::setPhone(string phone)
{
    this->phone = phone;
}

void Account::setType(string type)
{
    this->type = type;
}

void Account::setListRental(const string listRentalID[], const int nRentalID)
{
    this->nRentalID = nRentalID; 
    for(int i = 0; i < this->nRentalID; i++)
        this->listRentalID[i] = listRentalID[i];
}

AccountID* Account::getID()
{
    return this->id;    
}

string Account::getName()
{
    return this->name; 
}

string Account::getAddress()
{
    return this->address;
}

string Account::getPhone()
{
    return this->phone;
}

string Account::getType()
{
    return this->type;
}

void Account::getListRental(string listRentalID[], int& nRentalID)
{
    nRentalID = this->nRentalID;
    for(int i = 0; i < this->nRentalID; i++)
        listRentalID[i] = this->listRentalID[i];
}

int Account::getNumOfRetalID()
{
    return this->nRentalID;
}

bool Account::isListVideoEmpty()
{
    return this->nRentalID == 0;
}

bool Account::isExistVideo(string videoID)
{
    for(int i = 0; i < this->nRentalID; i++)
    {
        if(this->listRentalID[i] == videoID)
            return true;
    }
    return false;
}

bool Account::addVideo(string videoID)
{
    if(this->nRentalID < MAX)
    {
        this->listRentalID[this->nRentalID++] = videoID;
        return true;
    }
    else
        return false;
}

bool Account::removeVideo(string videoID)
{
    for(int i = 0; i < this->nRentalID; i++)
    {
        if(this->listRentalID[i] == videoID)
        {
            for(int j = i; j < this->nRentalID - 1; j++)
            {
                this->listRentalID[j] = this->listRentalID[j + 1];
            }
            this->nRentalID--;
            return true;
        }
    }
    return false;
}

string Account::toString()
{
    string temp; 
    temp = this->id->toString() + "," + this->name + "," + this->address + "," + this->phone + "," + this->type;
    for(int i = 0; i < this->nRentalID; i++)
    {
        temp += "\n" + this->listRentalID[i];
    }
    return temp;
}

string Account::getAccoutInfo()
{
    string temp; 
    temp = this->id->toString() + "," + this->name + "," + this->address + "," + this->phone + "," + this->type;
    return temp;
}