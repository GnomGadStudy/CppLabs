#pragma once

#include <vector>

#include "Card.h"

#ifndef DECK_H
#define DECK_H

class Deck{
protected:
bool isNormalDeck;
void setNormalDeck();
void setBigDeck();
std::vector<Card> cards;


public:
Deck();
Deck(bool);
~Deck();

};

#endif