#include <iostream>
#include <wchar.h>
#include <io.h>
#include <fcntl.h>

#include "Card.h"

int main(){
    setlocale(LC_ALL, "rus");
    _setmode(_fileno(stdout), _O_U16TEXT);
    wchar_t k = L'\u2663';
    wchar_t kk;
    Card* c = new Card(14,k);

    std::wcout<<*c<<*c;
}