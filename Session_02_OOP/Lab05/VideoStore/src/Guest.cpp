/**
 * Created on 15/01/2021 
*/

#include "Guest.h"

Guest::Guest() : Account()
{
    this->numberOfReturnSuccess = 0;
    this->setType("Guest");
}

Guest::Guest(AccountID* id, string name, string address, string phone) : Account(id, name, address, phone, "Guest")
{
    this->numberOfReturnSuccess = 0;
}

Guest::Guest(string id, string name, string address, string phone) : Account(id, name, address, phone, "Guest")
{
    this->numberOfReturnSuccess = 0;
}

Guest::~Guest()
{
    this->numberOfReturnSuccess = 0;
}

int Guest::getNumberOfReturnSuccess()
{
    return this->numberOfReturnSuccess;
}

bool Guest::isPromoteAccount()
{
    return this->numberOfReturnSuccess >= NUM_RETURN_SUCCESS_TO_PROMOTE;
}

bool Guest::returnVideo(string videoID)
{
    if(this->removeVideo(videoID) == true)
    {
        this->numberOfReturnSuccess++;
        return true;
    }
    else
        return false;
}

bool Guest::borrowVideo(string videoID)
{
    if(this->getNumOfRetalID() < MAX_BORROW_VIDEO)
    {
        return this->addVideo(videoID);
    }
    else 
        return true;
}