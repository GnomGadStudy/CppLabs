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
public:
std::vector<Card> cards;
Deck();
Deck(bool);
~Deck();

void shuffle();

Card& getCard();



};

#endif