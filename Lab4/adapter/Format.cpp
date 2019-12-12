#include "Format.h"
#include <wchar.h>
#include <io.h>
#include <fcntl.h>
#include "Card.h"
#include "Deck.h"
#include "Format.h"

std::string Format::format(){
std::wcout<<"Deck not a kek"
}

void Format::prettyPrint(const IFormattable& object){
Deck* kek = dynamic_cast<Deck>( object);
kek->format();
}