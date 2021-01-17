/**
 * Created on 11/01/2021 
*/

#ifndef __ID_H__
#define __ID_H__

#pragma once

#include <iostream>
#include <string>

using namespace std;

class ID 
{
    private:
        string xxx; 
        string yyyy;

    public:
        ID();
        ID(int xxx, int yyyy);
        ID(const ID& id);
        ID(const string id);
        ~ID();

        void setXXX(int xxx);
        void setYYYY(int yyyy);

        string getXXX();
        string getYYYY();

        string toString();

        bool operator==(const ID& id);
        bool operator==(const string& id);
        ID& operator=(const ID& id);
};

#endif // __ID_H__