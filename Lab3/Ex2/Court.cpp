#include <iostream>
#include <fstream>

#include "Court.h"
#include "Season.h"

Court::Court(std::string adress, int sector, int capacity, int attendance, double area, Coating cover,Season season,int tickets):SportsFacility(adress,sector,capacity,attendance,area,cover,tickets){
count =0;
this->season = season;
//std::cout<<"Court has created"<<std::endl;
std::ofstream kek;       
    kek.open(adress+".txt"); 
    for(int i =0;i< tickets;i++){
        kek<<"No";
        if(i!=tickets-1)
            kek<<std::endl;
    }
    kek.close();
    std::cout <<adress <<" has created" << std::endl;
}
void Court::nextSeason(){
    if(season==Season::Winter)
        season = Season::Spring;
    else if(season == Season::Spring)
        season = Season::Summer;
    else if(season == Season::Summer)
        season =  Season::Autumn;
    else if(season == Season::Autumn)
        season = Season::Winter;
}

void Court::ticket() {
    if(season != Season::Summer)
    {
        std::cout<<"Come back in the summer"<<std::endl;
        return;
    }
    bool bools[tickets]={0}; 
    bool flag = true;
    std::string line;
    std::ifstream in(adress+".txt");
    while (getline(in, line)){   
        count++;
        if(line == "No"&& flag){
            std::cout<<"Your number abonimnet in Court is "<<count<<std::endl;
            flag=false;
            bools[count-1] =1;
        }
        else if(line == "Yes")
            bools[count-1] =1;
        else 
            bools[count-1]=0;
    }
    in.close(); 
    std::ofstream kek;       
    kek.open(adress+".txt"); 
    for(int i =0;i< tickets;i++){
        if(!bools[i]){
            kek<<"No";
            if(i!=tickets-1)
                kek<<std::endl;
        }
        else
        {
            kek<<"Yes";
            if(i!=tickets-1)
                kek<<std::endl;
        }
    }
    kek.close();
    count=0;
}

Court::~Court(){
    std::cout<<"Court has deleted"<<std::endl;
}