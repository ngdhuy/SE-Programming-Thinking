/**
 * Created on 11/01/2021 
*/

#include "Video.h"

Video::Video()
{
    this->id = new ID(); 
    this->title = "";
    this->rentalType = "";
    this->loanType = ""; 
    this->inStock = 0; 
    this->fee = 0; 
    this->isAvailable = false;
}

Video::Video(ID id, string title, string rentalType, string loanType, int inStock, float fee)
{
    this->id = &id; 
    this->title = title; 
    this->rentalType = rentalType;
    this->loanType = loanType; 
    this->inStock = inStock; 
    this->fee = fee; 
    this->isAvailable = (inStock <= 0) ? false : true;
}

Video::Video(string id, string title, string rentalType, string loanType, int inStock, float fee)
{
    this->id = new ID(id); 
    this->title = title; 
    this->rentalType = rentalType;
    this->loanType = loanType; 
    this->inStock = inStock; 
    this->fee = fee; 
    this->isAvailable = (inStock <= 0) ? false : true;
}

Video::Video(const Video& video)
{
    this->id = video.id;
    this->title = video.title; 
    this->rentalType = video.rentalType;
    this->loanType = video.loanType; 
    this->inStock = video.inStock; 
    this->fee = video.fee; 
    this->isAvailable = video.isAvailable;
}

Video::~Video()
{
    delete this->id; 
    this->id = NULL;
}

ID Video::getID()
{
    return *(this->id);
}

string Video::getTitle()
{
    return this->title;
}

string Video::getRental()
{
    return this->rentalType;
}

string Video::getLoanType()
{
    return this->loanType;
}

int Video::getInStock()
{
    return this->inStock;
}

float Video::getFee()
{
    return this->fee;
}

bool Video::getIsAvailable()
{
    return this->isAvailable;
}

void Video::setID(ID id)
{
    this->id = &id;
}

void Video::setID(string id)
{
    this->id = new ID(id);
}

void Video::setTitle(string title)
{
    this->title = title;
}

void Video::setRental(string rentals)
{
    this->rentalType = rentals;
}

void Video::setLoanType(string loan)
{
    this->loanType = loan;
}

void Video::setInStock(int instock)
{
    this->inStock = instock;
}

void Video::setFee(float fee)
{
    this->fee = fee;
}

void Video::setIsAvailable(bool isAvailable)
{
    this->isAvailable = isAvailable;
}

void Video::Input()
{
    this->id->Input();
    
    cout << "Enter title: "; 
    cin >> this->title;

    cout << "Enter loan type: ";
    cin >> this->loanType;

    cout << "Enter instock: ";
    cin >> this->inStock;

    cout << "Enter fee: ";
    cin >> this->fee;

    this->isAvailable = (this->inStock == 0) ? false : true;
}

string Video::InputGenres()
{
    int numChoose;
    cout << "Enter an option for Grenres below:" << endl;
    cout << "\t 1. Action" << endl;
    cout << "\t 2. Horror" << endl;
    cout << "\t 3. Drama" << endl;
    cout << "\t 4. Comedy" << endl;
    cout << "=> Choose: ";
    cin >> numChoose;

    string genres = "";
    switch (numChoose)
    {
    case 1:
        genres = "Action";
        break;
    case 2: 
        genres = "Horror"; 
        break; 
    case 3:
        genres = "Dramma"; 
        break;
    case 4: 
        genres = "Comedy";
        break;
    }
    return genres;
}