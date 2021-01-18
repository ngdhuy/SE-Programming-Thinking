/**
 * Created on 11/01/2021 
*/

#include "DVD.h"

DVD::DVD() : Video()
{
    this->genres = "";
}

DVD::DVD(string genres) : Video()
{
    this->genres = genres;
}

DVD::DVD(ID id, string title, string rentalType, string loanType, int inStock, float fee, string genres) : Video(id, title, rentalType, loanType, inStock, fee)
{
    this->genres = genres;
}

DVD::DVD(string id, string title, string rentalType, string loanType, int inStock, float fee, string genres) : Video(id, title, rentalType, loanType, inStock, fee)
{
    this->genres = genres;
}

DVD::~DVD()
{
    
}

void DVD::setGenres(string genres)
{
    this->genres = genres;
}

string DVD::getGenres()
{
    return this->genres;
}

string DVD::toString()
{
    string temp;
    temp = this->getID().toString() + "," + this->getTitle() + "," + this->getRental() + "," + this->getLoanType() + "," + to_string(this->getInStock()) + "," + to_string(this->getFee()) + "," + this->getGenres();
    return temp;
}

void DVD::Input()
{
    Video::Input();
    this->genres = InputGenres();
}