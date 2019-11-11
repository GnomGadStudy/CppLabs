#include "Ex3.h"
#include "Stadium.h"

#include <iostream>
#include <vector>
int main(){

    Stadium st1("Kek st,402a","Goods of Football",2,100,1);
    Stadium st2;
    Stadium st3(st1);
    st3.setAdress("Fot-R st, 188");
    st3.setNameCloub("Azino-777");
    st3.setCapacity(12000);
    st3.setSectors(18);
    st3.setAttendance(5000);

    st2.setAdress("Bogdan street, 17A");
    st2.setNameCloub("The KING");
    st2.setCapacity(200);
    st2.setSectors(1);
    st2.setAttendance(20);
    st2.imitation();
    st1.imitation();
    st3.imitation();;
    st3.serialize("kek.txt");
    st3.deserialize("kek.txt");
    std::vector<Stadium> stadiums;
    stadiums.push_back(st1);
    stadiums.push_back(st2);
    stadiums.push_back(st3);
    st3.printAVGSort(stadiums);

    return 0;
}