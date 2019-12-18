#pragma once
#include "Hand.h"

#ifndef PLAYER_H
#define PLAYER_H
class Player{
protected:
    
    
public:
int balance;
    Hand* hand;//Composition
    Player();
    Player(int m);
    virtual ~Player(){
        delete hand;
    }
   virtual void printBalance();
   virtual int getBalance();
};



#endif
