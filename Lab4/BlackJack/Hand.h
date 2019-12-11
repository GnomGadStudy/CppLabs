#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Card.h"

#ifndef HAND_H
#define HAND_H

class Hand{
protected:

int numCards;//1 = 0;

public:
Hand(); 
Card* cards[12];//Aggregation
void setCard(Card &c);
void downCard();




friend std::wostream& operator<< (std::wostream& o, Hand hand);
};

#endif