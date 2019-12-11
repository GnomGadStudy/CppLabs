#pragma once
#include <vector>
#include "Deck.h"

#ifndef SHOE_H
#define SHOE_H

class Shoe{
protected:

public:
std::vector<Deck> decks;
Shoe();
void setDecks();
Card& getCard();
void shuffle();


};

#endif