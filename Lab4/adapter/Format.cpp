#include "Format.h"
#include <wchar.h>
#include <io.h>
#include <fcntl.h>
#include "Card.h"
#include "Deck.h"
#include "Format.h"
#include <string>

Format::Format(){

}

std::string Format::format() {
return "Deck not a kek";
}

void Format::prettyPrint(const Card& object){
std::cout<<Format::format()<<std::endl;
} 