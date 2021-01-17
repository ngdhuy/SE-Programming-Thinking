/**
 * Created on 11/01/2021 
*/

#include "Lib.h"

void Split(string source, char cSplited, string sResult[], int& nResult)
{
    string temp;
    nResult = 0;

    int start = 0;
    int len = 0;

    for(int i = 0; i < source.length(); i++)
    {
        if(source[i] == cSplited)
        {
            temp = source.substr(start, len);

            sResult[nResult++] = temp;

            len = 0;
            start = i + 1;
        }
        else
        {
            len++;
        }
    }

    temp = source.substr(start, len);
    sResult[nResult++] = temp;
}