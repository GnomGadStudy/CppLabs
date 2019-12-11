#include "Shoe.h"
#include <algorithm>
#include <random>
#include <vector>
#include <ctime>

Shoe::Shoe(){
    setDecks();
    shuffle();
}

void Shoe::setDecks(){
    for(int i =0;i<4;i++){
        decks.push_back(Deck(false));
    }
}

Card& Shoe::getCard(){
    
    return decks[0].getCard();
}

void Shoe::shuffle(){
     for(int i=0;i<14;i++)
        if(i<1)
            decks[0].shuffle();
        else if(i <3)
            decks[1].shuffle();
        else if(i<6)
            decks[2].shuffle();
        else   
            decks[3].shuffle();
    
    
}