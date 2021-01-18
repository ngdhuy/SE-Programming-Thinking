/**
 * Created on 15/01/2021 
*/

#include "Regular.h"

Regular::Regular() : Account()
{
    this->numberOfReturnSuccess = 0;
    this->setType("Regular");
}

Regular::Regular(AccountID* id, string name, string address, string phone) : Account(id, name, address, phone, "Regular")
{
    this->numberOfReturnSuccess = 0;
}

Regular::Regular(string id, string name, string address, string phone) : Account(id, name, address, phone, "Regular")
{
    this->numberOfReturnSuccess = 0;
}

Regular::~Regular()
{
    this->numberOfReturnSuccess = 0;
}

int Regular::getNumberOfReturnSuccess()
{
    return this->numberOfReturnSuccess;
}

void Regular::setNumberOfReturnSuccess(int numberOfReturnSuccess)
{
    this->numberOfReturnSuccess = numberOfReturnSuccess;
}

bool Regular::isPromoteAccount()
{
    return this->numberOfReturnSuccess >= NUM_RETURN_SUCCESS_TO_PROMOTE_VIP;
}

bool Regular::returnVideo(string videoID)
{
    if(this->removeVideo(videoID) == true)
    {
        this->numberOfReturnSuccess++;
        return true;
    }
    else
        return false;
}

bool Regular::borrowVideo(string videoID)
{
    return this->addVideo(videoID);
}