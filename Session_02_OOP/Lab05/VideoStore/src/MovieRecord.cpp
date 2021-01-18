/**
 * Created on 11/01/2021 
*/

#include "MovieRecord.h"

MovieRecord::MovieRecord()
{
    this->genres = "";
}

MovieRecord::MovieRecord(string genres) : Video()
{
    this->genres = genres;
}

MovieRecord::MovieRecord(ID id, string title, string rentalType, string loanType, int inStock, float fee, string genres) : Video(id, title, rentalType, loanType, inStock, fee)
{
    this->genres = genres;
}

MovieRecord::MovieRecord(string id, string title, string rentalType, string loanType, int inStock, float fee, string genres) : Video(id, title, rentalType, loanType, inStock, fee)
{
    this->genres = genres;
}

MovieRecord::~MovieRecord()
{

}

void MovieRecord::setGenres(string genres)
{
    this->genres = genres;
}

string MovieRecord::getGenres()
{
    return this->genres;
}

string MovieRecord::toString()
{
    string temp;
    temp = this->getID().toString() + "," + this->getTitle() + "," + this->getRental() + "," + this->getLoanType() + "," + to_string(this->getFee()) + "," + this->getGenres();
    return temp;
}

void MovieRecord::Input()
{
    Video::Input();
    this->genres = InputGenres();
}