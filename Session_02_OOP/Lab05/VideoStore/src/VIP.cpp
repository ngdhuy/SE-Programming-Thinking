/**
 * Created on 15/01/2021 
*/

#include "VIP.h"

VIP::VIP() : Account()
{
    this->rewardPoint = 0;
    this->setType("VIP");
}

VIP::VIP(AccountID* id, string name, string address, string phone) : Account(id, name, address, phone, "VIP")
{
    this->rewardPoint = 0;
}

VIP::VIP(string id, string name, string address, string phone) : Account(id, name, address, phone, "VIP")
{
    this->rewardPoint = 0;
}

VIP::~VIP()
{
    this->rewardPoint = 0;
}

int VIP::getRewardPoint()
{
    return this->rewardPoint;
}

int VIP::getCountingFreeVideo()
{
    int counting = this->rewardPoint / ADDING_POINT; 
    this->rewardPoint = this->rewardPoint % ADDING_POINT;
    return counting;
}

bool VIP::returnVideo(string videoID)
{
    if (this->removeVideo(videoID) == true)
    {
        this->rewardPoint += ADDING_POINT;
        return true;
    }
    else
        return false;
}

bool VIP::borrowVideo(string videoID)
{
    return this->addVideo(videoID);
}