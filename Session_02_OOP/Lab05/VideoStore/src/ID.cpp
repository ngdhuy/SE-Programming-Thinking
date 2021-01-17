/**
 * Created on 11/01/2021 
*/

#include "ID.h"

ID::ID()
{
    this->xxx = "000";
    
    // the first video was made on 1888
    this->yyyy = "1888";
}

ID::ID(int xxx, int yyyy)
{
    if(0 <= xxx && xxx <= 999)
    {
        this->xxx[2] = (xxx % 10) + 30;
        xxx /= 10;
        this->xxx[1] = (xxx % 10) + 30;
        xxx /= 10; 
        this->xxx[0] = xxx + 30;
    }

    if(1888 <= yyyy && yyyy <= 9999)
    {
        this->yyyy[3] = (yyyy % 10) + 30;
        yyyy /= 10;
        this->yyyy[2] = (yyyy % 10) + 30;
        yyyy /= 10;
        this->yyyy[1] = (yyyy % 10) + 30;
        yyyy /= 10; 
        this->yyyy[0] = yyyy + 30;
    }
}

ID::ID(const ID& id)
{
    this->xxx = id.xxx;
    this->yyyy = id.yyyy;
}

ID::ID(const string id)
{
    this->xxx = id.substr(1, 3);
    this->yyyy = id.substr(5, 4);
}

ID::~ID()
{

}

void ID::setXXX(int xxx)
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

void ID::setYYYY(int yyyy)
{
    // the first video was made on 1888
    if(1888 <= yyyy && yyyy <= 9999)
    {
        this->yyyy[3] = (yyyy % 10) + 30;
        yyyy /= 10;
        this->yyyy[2] = (yyyy % 10) + 30;
        yyyy /= 10;
        this->yyyy[1] = (yyyy % 10) + 30;
        yyyy /= 10; 
        this->yyyy[0] = yyyy + 30;
    }
}

string ID::getXXX()
{
    return this->xxx;
}

string ID::getYYYY()
{
    return this->yyyy;
}

string ID::toString()
{
    string temp = "I" + this->xxx + "-" + this->yyyy;
    return temp;
}

bool ID::operator==(const ID& id)
{
    return ((this->xxx == id.xxx) && (this->yyyy == id.yyyy));
}

bool ID::operator==(const string& id)
{
    return ((this->xxx == id.substr(1, 3)) && (this->yyyy == id.substr(5, 4)));
}

ID& ID::operator=(const ID& id)
{
    if(this != &id)
    {
        this->xxx = id.xxx; 
        this->yyyy = id.yyyy;
    }
    return *this;
}