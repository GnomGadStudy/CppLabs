#include "Hand.h"
#include "Card.h"
#include <iostream>
#include <fstream>
#include <string>
Hand::Hand(){
numCards =0;
}
void Hand::setCard(Card &c){
    cards[numCards] = new Card(c);
    numCards++;
}
void Hand::downCard()
{
    cards[--numCards]->changePos(Card::position::OUT);
    
}
std::wostream& operator<< (std::wostream& o, Hand hand) {
    std::wstring s;
    /* char c = '0';
    if(card.point >10){
        if(card.point == 11)
            c = 'J';
        else if(card.point == 12)
            c = 'Q';
        else if(card.point == 13)
            c = 'K';
        else if(card.point == 14)
            c = 'A';
    }
    else
        s.append(std::to_wstring(card.point));
    if(c != '0')
        s.append(1,c);
    s.append(1,card.suit); */
    
    
    /* s.append(L" _____ \n");
    s.append(L"|");
    s.append(1,c);
    s.append(1,card.suit);
    s.append(L"   ");;
    s.append(L"|\n");
    s.append(L"|     |\n");
    s.append(L"|     |\n");
    s.append(L"|     |\n");
    s.append(L"|"); 
    s.append(L"   ");
    s.append(1,c);
    s.append(1,card.suit);
    s.append(L"|\n");
    s.append(L" ‾‾‾‾‾ \n"); */
    
    o<<s;
    return o;
}