/**
 * Created on 15/01/2021 
*/

#include "AccountID.h"

AccountID::AccountID()
{
    this->xxx = "000";
}

AccountID::AccountID(int xxx)
{
    if(0 <= xxx && xxx <= 999)
    {
        this->xxx[2] = (xxx % 10) + 30;
        xxx /= 10;
        this->xxx[1] = (xxx % 10) + 30;
        xxx /= 10; 
        this->xxx[0] = xxx + 30;
    }
}

AccountID::AccountID(const AccountID& id)
{
    this->xxx = id.xxx;
}

AccountID::AccountID(const string id)
{
    this->xxx = id.substr(1, 3);
}

AccountID::~AccountID()
{

}

void AccountID::setXXX(int xxx)
{
    if(0 <= xxx && xxx <= 999)
    {
        this->xxx[2] = (xxx % 10) + 30;
        xxx /= 10;
        this->xxx[1] = (xxx % 10) + 30;
        xxx /= 10; 
        this->xxx[0] = xxx + 30;
    }
    
}

string AccountID::getXXX()
{
    return this->xxx;
}


string AccountID::toString()
{
    string temp = "C" + this->xxx;
    return temp;
}

bool AccountID::operator==(const AccountID& id)
{
    return this->xxx == id.xxx;
}

bool AccountID::operator==(const string& id)
{
    return this->xxx == id.substr(1, 3);
}

AccountID& AccountID::operator=(const AccountID& id)
{
    if(this != &id)
    {
        this->xxx = id.xxx; 
    }
    return *this;
}