/**
 * Created on 15/01/2021 
*/

#ifndef __VIP_H__
#define __VIP_H__

#include <iostream>
#include <string>

#include "Account.h"

#pragma once 

#define NUM_REWARD_POINT 100
#define ADDING_POINT 10

using namespace std;

class VIP : public Account
{
    private: 
        int rewardPoint;

    public:
        VIP(); 
        VIP(AccountID* id, string name, string address, string phone);
        VIP(string id, string name, string address, string phone);
        ~VIP();

        int getRewardPoint();
        int getCountingFreeVideo();

        bool returnVideo(string videoID);
        bool borrowVideo(string videoID);
};

#endif //__VIP_H__