#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <exception>
#include "Card.h"

#ifndef HAND_H
#define HAND_H


class Hand{
protected:

int numCards;//1 = 0;

public:
int points;
Hand(); 
Card& cards[12];//Aggregation
void setCard(Card &c);
void downCard();
void printHand();
void printPoints();
void printHandDealer();
void printPointsDealer();
void refresh();

~Hand(){
    for(int i =0;i<12;i++)
        delete cards[i];
}

};
#endif