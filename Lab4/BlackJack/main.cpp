#include <iostream>
#include <wchar.h>
#include <io.h>
#include <fcntl.h>

#include "Card.h"
#include "Deck.h"

int main(){
    setlocale(LC_ALL, "rus");
    _setmode(_fileno(stdout), _O_U16TEXT);
    wchar_t k = L'\u2663';
    wchar_t kk;
    
    Deck* k1 = new Deck(false);
    
}