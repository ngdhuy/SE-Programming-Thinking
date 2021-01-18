/**
 * Created on 11/01/2021 
*/

#include "Game.h"

Game::Game() : Video()
{
}

Game::Game(ID id, string title, string rentalType, string loanType, int inStock, float fee) : Video(id, title, rentalType, loanType, inStock, fee)
{
}

Game::Game(string id, string title, string rentalType, string loanType, int inStock, float fee) : Video(id, title, rentalType, loanType, inStock, fee)
{
}

Game::~Game()
{

}

string Game::toString()
{
    string temp;
    temp = this->getID().toString() + "," + this->getTitle() + "," + this->getRental() + "," + this->getLoanType() + "," + to_string(this->getInStock()) + "," + to_string(this->getFee());
    return temp;
}

void Game::Input()
{
    Video::Input();
}