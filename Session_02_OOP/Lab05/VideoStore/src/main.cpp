/**
 * Created on 11/01/2021 
*/

#include <iostream>
#include <string>
#include <fstream>

#include "Video.h"
#include "DVD.h"
#include "Game.h"
#include "MovieRecord.h"

#include "NodeVideo.h"
#include "ListVideo.h"

#include "Account.h"
#include "Guest.h"
#include "Regular.h"
#include "VIP.h"

#include "ListAccount.h"

using namespace std;

// --- Prototype ---
string upperCase(string s);
int PrintMenu();
void PrintStudentInfo();

// --- Main function ---
int main(int argc, char **argv)
{
    ListAccount* listCustomer = new ListAccount();
    // listCustomer->LoadFromFile("customers.txt");
    listCustomer->LoadFromFile(argv[1]);

    ListVideo* listItem = new ListVideo(); 
    // listItem->LoadFromFile("items.txt");
    listItem->LoadFromFile(argv[2]);

    
    
    int numChoose = 0; 
    do
    {
        numChoose = PrintMenu();
        switch (numChoose)
        {
        case 1:
            listItem->Action();
            break;
        case 2:
            listCustomer->Action();
            break;
        case 3:
            listCustomer->Promote();
            break;
        case 4:
            listCustomer->Borrow(listItem);
            break;
        case 5:
            listCustomer->Return(listItem);
            break;
        case 6:
            listItem->PrintAllItem();
            break;
        case 7:
            listItem->PrintItemOutOfStock();
            break;
        case 8:
            listCustomer->PrintAllAccountInfo();
            break;
        case 9:
            listCustomer->PrintGroupOfAccount();
            break;
        case 10:
            int subChoose; 
            cout << "------ Search information ------" << endl;
            cout << "\t 1. Search customer by ID" << endl; 
            cout << "\t 2. Search customer by Name" << endl;
            cout << "\t 3. Search item by ID" << endl; 
            cout << "\t 4. Search item by title" << endl;
            cout << "\t 0. Back" << endl;
            cout << "=> Chooose: "; 
            cin >> subChoose;
            switch (subChoose)
            {
            case 0:
                break;
            case 1: 
                listCustomer->SearchByID();
                break;
            case 2: 
                listCustomer->SearchByName();
                break;
            case 3: 
                listItem->SearchByID();
                break;
            case 4:
                listItem->SearchByTitle();
                break;
            }
            break;
        default:
            break;
        }
    } while (numChoose != 0);

    PrintStudentInfo();

    listCustomer->SaveToFile(argv[1]);
    listItem->SaveToFile(argv[2]);
    return 0;
}

// --- Implement functions ---
string upperCase(string s)
{
    string temp = s;
    for(int i = 0; i < s.length(); i++)
        temp[i] = toupper(s[i]);
    return temp;
}

int PrintMenu()
{
    string numChoose;
    cout << endl << "Welcome to Genie’s video store.\nEnter an option below." << endl;
    cout << "\t 1. Add a new item, update or delete an existing item" << endl;
    cout << "\t 2. Add new customer or update an existing customer" << endl;
    cout << "\t 3. Promote an existing customer" << endl;
    cout << "\t 4. Rent an item" << endl;
    cout << "\t 5. Return an item" << endl;
    cout << "\t 6. Display all items" << endl;
    cout << "\t 7. Display out-of-stock items" << endl;
    cout << "\t 8. Display all customers" << endl;
    cout << "\t 9. Display group of customers" << endl;
    cout << "\t 10. Search items or customer" << endl;
    cout << "\t EXIT" << endl;
    cout << "=> Choose: ";
    cin >> numChoose;
    
    if(numChoose == "1")
        return 1;
    else if(numChoose == "2")
        return 2;
    else if(numChoose == "3")
        return 3;
    else if(numChoose == "4")
        return 4;
    else if(numChoose == "5")
        return 5;
    else if(numChoose == "6")
        return 6;
    else if(numChoose == "7")
        return 7;
    else if(numChoose == "8")
        return 8;
    else if(numChoose == "9")
        return 9;
    else if(numChoose == "10")
        return 10;
    else if(upperCase(numChoose) == "EXIT")
        return 0;

    return -1;
}

void PrintStudentInfo()
{
    cout << endl;
    cout << "ASSIGNMENT 2 GROUP 30" << endl;
    cout << "s3818582,s3818582@rmit.edu.vn,Bao,Nguyen" << endl;
    cout << "s3818480,s3818480@rmit.edu.vn,Vinh,Le" << endl;
    cout << "S3665025,S3665025@rmit.edu.vn,Duy,Tran" << endl;
    cout << "s3681475,s3681475@rmit.edu.vn,Kiet,Park" << endl;
    cout << endl;
}