#include "Hand.h"
#include "Card.h"
#include <iostream>
#include <fstream>
#include <string>
#include <exception>
Hand::Hand(){
numCards =0;
points =0;
}
void Hand::setCard(Card &c){
    cards[numCards] = new Card(c);
    if(cards[numCards]->getPoint()!=14){
        for(int i =0;i<numCards-1;i++){
            if(cards[i]->getPoint()==14){
                if(points +cards[numCards]->getPoint()>21){
                    points-=11;
                    points+=1;
                    points+=cards[numCards]->getPoint();
                }
            }
        }
        points+= 10<=cards[numCards]->getPoint()?10:cards[numCards]->getPoint();
    }
    else if(points +11 <=21)
        points +=11;
    else 
        points +=1;
    numCards++;
}
void Hand::downCard(){
    cards[--numCards]->changePos(Card::position::OUT);
}

void Hand::printHand(){
    for(int i=0;i< numCards;i++)
        std::wcout<<*cards[i]<<" ";
    std::wcout<<std::endl;
}

void Hand::printHandDealer(){
    std::wcout<<*cards[0]<<" "<<"??";
    std::wcout<<std::endl;
}

void Hand::printPoints(){
    std::wcout<<"You have a "<<points<<" points"<<std::endl;
}
void Hand::printPointsDealer(){
    std::wcout<<"Dealer have a "<<points<<" points"<<std::endl;
}
void Hand::refresh(){
    numCards =0;
    points =0;
}