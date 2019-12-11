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
    wchar_t k = L'\u2663';
    wchar_t kk;
    Shoe* s = new Shoe();
  
     for(Card n:s->decks[0].cards)
    std::wcout<<n<<" ";
    std::wcout<<"---"<<std::endl;
    for(Card n:s->decks[1].cards)
    std::wcout<<n<<" ";
     std::wcout<<"---"<<std::endl;
     for(Card n:s->decks[2].cards)
    std::wcout<<n<<" ";
     std::wcout<<"---"<<std::endl;
     for(Card n:s->decks[3].cards)
    std::wcout<<n<<" ";
     std::wcout<<"---"<<std::endl;
    
    
}