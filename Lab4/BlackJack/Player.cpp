#include "Player.h"
#include <iostream>

Player::Player():Player(100000){
}
Player::Player(int m){
    balance = m;
    hand = new Hand();
}
void Player::printBalance(){
    std::wcout<<"Your balance : "<<balance<<std::endl;
}
int Player::getBalance(){
    return balance;
}