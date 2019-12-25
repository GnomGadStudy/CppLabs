#include <iostream>
#include <wchar.h>
#include <io.h>
#include <fcntl.h>

#include "Card.h"
#include "Deck.h"
#include "Shoe.h"
#include "Hand.h"
#include "Player.h"
#include "Dealer.h"
#include "Game.h"

int main(){
	//setlocale(LC_ALL, "RUSSIAN");

    _wsetlocale(LC_ALL, L"RUSSIAN");
	_setmode(_fileno(stdout), _O_U16TEXT);
    

    Game* game = new Game();
    int a =1;
    while(a){
		std::wcout << L"Новая игра\n\n\n\n" << std::endl;
        if(game->getBalancePlayer()<=0)
            break;
        game->gameCycle();
        
        std::cin>>a;    
    }

    /* Shoe* s = new Shoe();
    Hand* h = new Hand();
    for(Card n:s->decks[0].cards)
    std::wcout<<n<<" ";
    std::wcout<<"---\n"<<std::endl;
    
    h->setCard(s->getCard());
    std::wcout<<*h->cards[0]<<" ";
    h->downCard();
    h->setCard(s->getCard());
    std::wcout<<*h->cards[0]<<" "; */

    

}