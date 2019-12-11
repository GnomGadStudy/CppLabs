#include "Deck.h"
#include "Card.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>

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


void Deck::shuffle(){
    std::srand(std::time(nullptr));
    std::random_shuffle(cards.begin(), cards.end());
    
}

Card& Deck::getCard(){
    for(int i =0;i<cards.size();i++){  
        if(cards[i].getPos() == Card::DECK)
        {
            cards[i].changePos(Card::HAND);
            return cards[i];
        }
    }
   
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
