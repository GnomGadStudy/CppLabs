#include "Deck.h"
#include "Card.h"
#include <iostream>
#include <vector>

Deck::Deck(){
    isNormalDeck = true;
    setNormalDeck();
}

Deck::Deck(bool isNormalDeck){
    this->isNormalDeck = isNormalDeck;

    if(isNormalDeck)
        setNormalDeck();
    else
        setBigDeck();
    
}
Deck::~Deck(){
    
}
void Deck::setNormalDeck(){
    for(int key = 6;key<15;key++){
        cards.push_back(Card(key,L'\u2665'));
        cards.push_back(Card(key,L'\u2666'));
        cards.push_back(Card(key,L'\u2663'));
        cards.push_back(Card(key,L'\u2660'));
    }
}

void Deck::setBigDeck(){
    for(int key = 2;key<15;key++){
        cards.push_back(Card(key,L'\u2665'));
        cards.push_back(Card(key,L'\u2666'));
        cards.push_back(Card(key,L'\u2663'));
        cards.push_back(Card(key,L'\u2660'));
    }
}
