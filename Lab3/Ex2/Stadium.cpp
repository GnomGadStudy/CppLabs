#include <iostream>
#include <fstream>
#include "Stadium.h"

Stadium::Stadium(std::string name, std::string adress, int sector, int capacity, int attendance, double area, Coating cover,int tickets):SportsFacility(adress,sector,capacity,attendance,area,cover,tickets){
    this->name = name;
    this->count = 0;
    //std::cout<<"Stadium has created"<<std::endl;
    std::ofstream kek;       
    kek.open(name+".txt"); 
    for(int i =0;i< tickets;i++){
        kek<<"No";
        if(i!=tickets-1)
            kek<<std::endl;
    }
    kek.close();
    std::cout <<name <<" has created" << std::endl;
}
void Stadium::ticket(){
    bool bools[tickets]={0}; 
    bool flag = true;
    std::string line;
    std::ifstream in(name+".txt");
    while (getline(in, line)){   
        count++;
        if(line == "No"&& flag){
            std::cout<<"Your number abonimnet in Stadion is "<<count<<std::endl;
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
    kek.open(name+".txt"); 
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

Stadium::~Stadium(){
    std::cout<<"Stadium has deleted"<<std::endl;
}