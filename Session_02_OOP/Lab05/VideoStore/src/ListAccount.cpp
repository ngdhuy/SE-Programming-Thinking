/**
 * Created on 11/01/2021 
*/

#include "ListAccount.h"

ListAccount::ListAccount()
{
    this->size = 0;
}

ListAccount::ListAccount(Account* listAccount[])
{
    this->size = 0;
}

ListAccount::~ListAccount()
{
    this->size = 0;
}

int ListAccount::getSize()
{
    return this->size;
}

void ListAccount::Add(Account* account)
{
    this->listAccount[this->size++] = account;
}

int ListAccount::Find(Account* account)
{
    for(int i = 0; i < this->size; i++)
        if(this->listAccount[i] == account)
            return i;
    return -1;
}

int ListAccount::Find(AccountID* id)
{
    for(int i = 0; i < this->size; i++)
        if(this->listAccount[i]->getID()->getXXX() == id->getXXX())
            return i;
    return -1;
}

void ListAccount::Remove(Account* account)
{
    for(int i = 0; i < this->size; i++)
    {
        if(this->listAccount[i] == account)
        {
            for(int j = i; j < this->size - 1; j++)
            {
                this->listAccount[i] = this->listAccount[i + 1];
            }
            this->size--;
        }
    }
}

void ListAccount::LoadFromFile(string fileName)
{
    fstream f(fileName, ios::in);
    if(f.is_open())
    {
        string line;
        while(getline(f, line))
        {
            if(line[0] == '#')
                continue;
            
            string sObject[MAX];
            int n;

            Split(line, ',', sObject, n);
            
            string accountType = sObject[5].substr(0, sObject[5].length());
            
            Account* object;
            if (accountType == "Guest")
            {
                object = new Guest(sObject[0], sObject[1], sObject[2], sObject[3]);
            }
            else if (accountType == "Regular")
            {
                object = new Regular(sObject[0], sObject[1], sObject[2], sObject[3]);
            }
            else if (accountType == "VIP")
            {
                object = new VIP(sObject[0], sObject[1], sObject[2], sObject[3]);
            }
            else
            {
                cout << "ACCOUNT file is ERROR" << endl;
            }
            
            int numberOfRental = stoi(sObject[4]);
            if(numberOfRental != 0)
            {
                for(int i = 0; i < numberOfRental; i++)
                {
                    string videoID; 
                    getline(f, videoID);
                    object->addVideo(videoID);
                }
            }
            this->Add(object);
        }
        
        f.close();
    }
    else
    {
        cout << "Cannot access file " << fileName << endl;
    }   
}

void ListAccount::SaveToFile(string fileName)
{
    fstream f(fileName, ios::out | ios::trunc);

    if(f.is_open())
    {
        for(int i = 0; i < this->size; i++)
        {
            f << this->listAccount[i]->toString() << endl;
        }
    }
    else
    {
        cout << "Cannot access file " << fileName << endl;
    }
    
}

void ListAccount::PrintAllAccountInfo()
{
    cout << "-- All Account --" << endl;
    for(int i = 0; i < this->size; i++)
    {
        cout << this->listAccount[i]->getAccoutInfo() << endl;
    }
}

void ListAccount::PrintGuestAccount()
{
    cout << "-- Guest Account --" << endl;
    for(int i = 0; i < this->size; i++)
    {
        if(this->listAccount[i]->getType() == "Guest")
            cout << this->listAccount[i]->getAccoutInfo() << endl;
    }
}

void ListAccount::PrintRegularAccount()
{
    cout << "-- Regular Account --" << endl;
    for(int i = 0; i < this->size; i++)
    {
        if(this->listAccount[i]->getType() == "Regular")
            cout << this->listAccount[i]->getAccoutInfo() << endl;
    }
}

void ListAccount::PrintVIPAccount()
{
    cout << "-- VIP Account --" << endl;
    for(int i = 0; i < this->size; i++)
    {
        if(this->listAccount[i]->getType() == "VIP")
            cout << this->listAccount[i]->getAccoutInfo() << endl;
    }
}

void ListAccount::PrintGroupOfAccount()
{
    int numChoose;
    cout << "--- Choose Group of Customer ---" << endl;
    cout << "\t 1. Guest Account" << endl;
    cout << "\t 2. Regular Account" << endl;
    cout << "\t 3. VIP Account" << endl;
    cout << "\t 4. All Accounts" << endl;
    cout << "=> Choose: ";
    cin >> numChoose;
    
    switch (numChoose)
    {
    case 1:
        this->PrintGuestAccount();
        break;
    case 2:
        this->PrintRegularAccount();
        break;
    case 3:
        this->PrintVIPAccount();
        break;
    case 4:
        this->PrintGuestAccount();
        this->PrintRegularAccount();
        this->PrintVIPAccount();
        break;
    }
}

void ListAccount::Action()
{
    int numChoose; 
    cout << "--- Account action ---" << endl;
    cout << "\t 1. Create new Guest customer" << endl;
    cout << "\t 2. Create new Regular customer" << endl;
    cout << "\t 3. Create new VIP customer" << endl;
    cout << "\t 4. Update Account" << endl;
    cout << "=> Choose: ";
    cin >> numChoose;

    switch (numChoose)
    {
    case 1:
        this->CreateGuest();
        cout << endl << "Create new Guest customer is success" << endl;
        break;
    case 2:
        this->CreateRegular();
        cout << endl << "Create new Regular customer is success" << endl;
        break;
    case 3:
        this->CreateVIP();
        cout << endl << "Create new VIP customer is success" << endl;
        break;
    case 4: 
        this->UpdateAccount();
        break;
    }
}

void ListAccount::CreateGuest()
{
    Guest* account = new Guest(); 
    account->Input();
    this->Add(account);
}

void ListAccount::CreateRegular()
{
    Regular* account = new Regular(); 
    account->Input();
    this->Add(account);
}

void ListAccount::CreateVIP()
{
    VIP* account = new VIP();
    account->Input();
    this->Add(account);
}

void ListAccount::UpdateAccount()
{
    string sID;
    cout << "Enter ID of updated account: "; 
    cin >> sID;

    AccountID* id = new AccountID(sID);
    int accountIndex = this->Find(id);
    if(accountIndex == -1)
    {
        cout << "Cannot found Account with ID " << id->toString() << endl;
        return;
    }

    cout << "Current Information of Account" << endl;
    this->PrintOneAccount(this->listAccount[accountIndex]);

    cout << "-- Enter new information for Account with ID " << id->toString() << " --" <<endl;
    string temp;
    cout << "Enter name: ";
    cin >> ws; 
    getline(cin, temp);
    this->listAccount[accountIndex]->setName(temp);

    cout << "Enter address: ";
    cin >> ws;
    getline(cin, temp);
    this->listAccount[accountIndex]->setAddress(temp);

    cout << "Enter phone number: "; 
    cin >> ws; 
    getline(cin, temp);
    this->listAccount[accountIndex]->setPhone(temp);

    cout << "After update information for ITEM with ID " << id->toString() << endl;
    this->PrintOneAccount(this->listAccount[accountIndex]);
}

void ListAccount::PrintOneAccount(Account* account)
{
    cout << "\tAccount ID: " << account->getID()->toString() << endl;
    cout << "\tName: " << account->getName() << endl;
    cout << "\tAddress: " << account->getAddress() << endl;
    cout << "\tPhone number: " << account->getPhone() << endl;
    cout << "\tAccount type: " << account->getType() << endl;
}

void ListAccount::Borrow(ListVideo* listVideo)
{
    string sID;
    cout << "Enter ID of account wanna rent: "; 
    cin >> sID;

    AccountID* accountID = new AccountID(sID);
    int accountIndex = this->Find(accountID);
    if(accountIndex == -1)
    {
        cout << "Cannot found Account with ID " << accountID->toString() << endl;
        return;
    }

    cout << "Enter ID of video wanna rent: "; 
    cin >> sID;

    ID* videoID = new ID(sID);

    NodeVideo* updatedVideo = listVideo->Find(videoID);
    
    if(updatedVideo == NULL)
    {
        cout << "Cannot found Item with ID " << videoID->toString() << endl;
        return;
    }    

    if (updatedVideo->getVideo()->getInStock() <= 0)
    {
        cout << "Item ID " << videoID->toString() << " is out of stock for rent" << endl;
        return;   
    }

    if(this->listAccount[accountIndex]->borrowVideo(videoID->toString()) == true)
    {
        int inStock = updatedVideo->getVideo()->getInStock();
        updatedVideo->getVideo()->setInStock(inStock - 1);
        cout << "Borrow success!" << endl;
    }
}

void ListAccount::Return(ListVideo* listVideo)
{
    string sID;
    cout << "Enter ID of account wanna return: "; 
    cin >> sID;

    AccountID* accountID = new AccountID(sID);
    int accountIndex = this->Find(accountID);
    if(accountIndex == -1)
    {
        cout << "Cannot found Account with ID " << accountID->toString() << endl;
        return;
    }

    cout << "Enter ID of video wanna return: "; 
    cin >> sID;

    ID* videoID = new ID(sID);

    NodeVideo* updatedVideo = listVideo->Find(videoID);
    
    if(updatedVideo == NULL)
    {
        cout << "Cannot found Item with ID " << videoID->toString() << endl;
        return;
    }    

    if(this->listAccount[accountIndex]->returnVideo(videoID->toString()) == true)
    {
        int inStock = updatedVideo->getVideo()->getInStock();
        updatedVideo->getVideo()->setInStock(inStock + 1);
        cout << "Return success!" << endl;
    }
    else
        cout << "Item ID " << videoID->toString() << " cannot be found in rent list of account " << accountID->toString() << endl;
    
}

void ListAccount::Promote()
{
    string sID;
    cout << "Enter ID of account wanna promote: "; 
    cin >> sID;

    AccountID* accountID = new AccountID(sID);
    int accountIndex = this->Find(accountID);
    if(accountIndex == -1)
    {
        cout << "Cannot found Account with ID " << accountID->toString() << endl;
        return;
    }

    if(this->listAccount[accountIndex]->getType() == "VIP")
    {
        cout << "Current account is VIP. So, you cannot promote for this account" << endl;
        return;
    }
    
    if(this->listAccount[accountIndex]->getType() == "Guest")
    {
        if(((Guest*)this->listAccount[accountIndex])->isPromoteAccount() == true)
        {
            Regular* newAccount = new Regular();
            newAccount->setID(this->listAccount[accountIndex]->getID());
            newAccount->setName(this->listAccount[accountIndex]->getName());
            newAccount->setAddress(this->listAccount[accountIndex]->getAddress());
            newAccount->setPhone(this->listAccount[accountIndex]->getPhone());
            
            string listRentalID[MAX];
            int nRentalID;

            this->listAccount[accountIndex]->getListRental(listRentalID, nRentalID);
            newAccount->setListRental(listRentalID, nRentalID);
            
            int newPromotePoint = ((Guest*)this->listAccount[accountIndex])->getNumberOfReturnSuccess() - NUM_RETURN_SUCCESS_TO_PROMOTE;
            newAccount->setNumberOfReturnSuccess(newPromotePoint);

            this->Remove(this->listAccount[accountIndex]);
            this->Add(newAccount);
        }
        else
        {
            cout << "This account does not have enough Success Rent Time" << endl;
            return;
        }
        
    }

    if(this->listAccount[accountIndex]->getType() == "Regular")
    {
        if(((Regular*)this->listAccount[accountIndex])->isPromoteAccount() == true)
        {
            VIP* newAccount = new VIP();
            newAccount->setID(this->listAccount[accountIndex]->getID());
            newAccount->setName(this->listAccount[accountIndex]->getName());
            newAccount->setAddress(this->listAccount[accountIndex]->getAddress());
            newAccount->setPhone(this->listAccount[accountIndex]->getPhone());
            
            string listRentalID[MAX];
            int nRentalID;

            this->listAccount[accountIndex]->getListRental(listRentalID, nRentalID);
            newAccount->setListRental(listRentalID, nRentalID);
            
            this->Remove(this->listAccount[accountIndex]);
            this->Add(newAccount);
        }
        else
        {
            cout << "This account does not have enough Success Rent Time" << endl;
            return;
        }
        
    }
}

void ListAccount::SearchByID()
{
    string sID;
    cout << "Enter ID of account: "; 
    cin >> sID;

    AccountID* accountID = new AccountID(sID);
    int accountIndex = this->Find(accountID);
    if(accountIndex == -1)
    {
        cout << "Cannot found Account with ID " << accountID->toString() << endl;
        return;
    }
    else
    {
        PrintOneAccount(this->listAccount[accountIndex]);
        string listRentalID[MAX];
        int nRentalID;
        this->listAccount[accountIndex]->getListRental(listRentalID, nRentalID);
        if(nRentalID > 0)
        {
            cout << "Account is borrowed " << nRentalID << " item with List of ID: ";
            for(int i = 0; i < nRentalID; i++)
            cout << "\t" << listRentalID[i];
        }
        cout << endl;
    }
}

void ListAccount::SearchByName()
{
    string sName;
    cout << "Enter name of account: "; 
    cin >> ws;
    getline(cin, sName);

    int accountIndex = -1;
    for(int i = 0; i < this->size; i++)
    {
        if(sName == this->listAccount[i]->getName())
        {
            accountIndex = i;
            break;   
        }
    }
    if(accountIndex == -1)
    {
        cout << "Cannot found Account with name " << sName << endl;
        return;
    }
    else
    {
        PrintOneAccount(this->listAccount[accountIndex]);
        string listRentalID[MAX];
        int nRentalID;
        this->listAccount[accountIndex]->getListRental(listRentalID, nRentalID);
        if(nRentalID > 0)
        {
            cout << "Account is borrowed " << nRentalID << " item with List of ID: ";
            for(int i = 0; i < nRentalID; i++)
            cout << "\t" << listRentalID[i];
        }
        cout << endl;
    }
}
