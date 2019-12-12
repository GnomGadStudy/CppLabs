#include <iostream>
#include <wchar.h>
#include <io.h>
#include <fcntl.h>
#include "Card.h"
#include "Deck.h"
#include "Format.h"
#include "IFormattable.h"

int main(){
    setlocale(LC_ALL, "rus");
    _setmode(_fileno(stdout), _O_U16TEXT);
    
    IFormattable* adapter = new Deck(true);
    adapter->format();
    

}