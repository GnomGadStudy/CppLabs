#pragma once

#ifndef GAME_H
#define GAME_H

#include "Shoe.h"
#include "Player.h"
#include "Dealer.h"
class exBust:public std::exception{
virtual const char* what() const throw()
  {
    return "You took more than 21!!!\n";
  }
};
class Game{
private:
    
    void initialize();
    Dealer* dealer;
    Player* player;
    Shoe* shoe;
    
public:
    int bank;
    Game();
    void gameCycle();
    void fillHand(Hand&);
    int appendHand(Hand&);
    int printHandDealer(Hand&);
    void printHand(Hand&);
    void win();
    void lose();
    void draw();
    int Bet();
    int compare();
    int appendHandDealer(Hand &);
    int getBalancePlayer();
    

    ~Game(){
        delete dealer;
        delete player;
        delete shoe;
    }
};

#endif