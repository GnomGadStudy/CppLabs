#include <iostream>
#include <vector>

#include "Stadium.h"
#include "Coating.h"
#include "Season.h"
#include "SportsFacility.h"
#include "Court.h"

int main(){
    SportsFacility* sfc[5];
    sfc[0] = new SportsFacility("Gde To Tut",5,320,100,45,Coating::ground,100);
    sfc[1] = new Stadium("KekDog","Kanada,Toronto,sort st., 138",8,560,320,128,Coating::ground,100);
    sfc[2] = new Court("Russia, Moscow vodka st. 228",4,90,35,40,Coating::rubber,Season::Spring,15);
    sfc[3] = new Stadium("Yakrasava","Uganda,Donetsk,oop st., 13",12,1020,600,308,Coating::ground,100);
    sfc[4] = new Stadium("Rain in my heart Pain","Mordor,dablovsk st., 144b",15,1890,1600,560,Coating::rubber,100);
    std::cout<<std::endl;
    for(int i =-1; i++<=3; sfc[i]->ticket());
    std::cout<<std::endl;
    std::cout<<"Test"<<std::endl;
    for (int i = -1; ++i<=4;)
		dynamic_cast<ISeasonTicketProvider*>(sfc[i])?std::cout << "Good, it cast to ISeasonTicketProvider "<< std::endl :std::cout <<"It does not cast to ISeasonTicketProvider" << std::endl;
    std::cout<<std::endl;
    for(int i =-1; i++<4; delete sfc[i]);
    return 0;
}