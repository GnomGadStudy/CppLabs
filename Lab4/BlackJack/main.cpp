#include <iostream>
#include <wchar.h>
#include <io.h>
#include <fcntl.h>

#include "Card.h"
#include "Deck.h"
#include "Shoe.h"
#include "Hand.h"

int main(){
    setlocale(LC_ALL, "rus");
    _setmode(_fileno(stdout), _O_U16TEXT);

    Shoe* s = new Shoe();
    Hand* h = new Hand();
    for(Card n:s->decks[0].cards)
    std::wcout<<n<<" ";
    std::wcout<<"---\n"<<std::endl;
    
    h->setCard(s->getCard());
    std::wcout<<*h->cards[0]<<" ";
    h->downCard();
    h->setCard(s->getCard());
    std::wcout<<*h->cards[0]<<" ";

    std::wcout<<h->points<<std::endl;

}