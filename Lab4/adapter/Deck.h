#pragma once

#include <vector>

#include "Card.h"
#include "IFormattable.h"
#ifndef DECK_H
#define DECK_H

class Deck:public IFormattable{
protected:
bool isNormalDeck;
void setNormalDeck();
void setBigDeck();
public:
std::vector<Card> cards;
Deck();
Deck(bool);
~Deck();
std::string format() override;
void prettyPrint(const IFormattable& object) override;

void shuffle();

Card& getCard();



};

#endif