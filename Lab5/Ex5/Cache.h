#pragma once
#include <iostream>
#include <vector>
#ifndef CACHE_H
#define CACHE_H

template <typename T>
class Cache{
private:
    std::vector<T> cache;
public:
    void put(T elem);
	void operator+= (T elem);
	bool contains(T elem);
	void print();
};

template <typename T>
void Cache<T>::put(T elem) {
	cache.push_back(elem);
}

template <typename T>
void Cache<T>::operator+=(T elem){
	cache.push_back(elem);
}

template <typename T>
bool Cache<T>::contains(T elem) {
	for (int i = 0; i < cache.size(); i++) 
		if (cache.at(i) == elem)
			return true;
	return false;
}

template <typename T>
void Cache<T>::print() {
	for (int i = 0; i < cache.size(); i++)
		std::cout << cache[i] << " ";
}

//----------------------------STRING FOR STRONG
class ExecptionOverFlow:public std::exception{
virtual const char* what() const throw()
  {
    return "В кэше 100 строк!!!\n";
  }
};

template <>
class Cache<std::string> {
private:
	std::vector<std::string> cache;
public:	
    void put(std::string str);
	bool contains(std::string str);
    void operator+=(std::string str);
    void print();
	void add();
};

void Cache<std::string>::put(std::string str) {
    add();
	cache.push_back(str);
}

void Cache<std::string>::operator+=(std::string str){
    add();
	cache.push_back(str);
}

void Cache<std::string>::add() {
    try{
	    if (cache.size() >=100) 
		    throw ExecptionOverFlow();
    }
    catch(std::exception& e){
        std::wcout<<e.what();
    }
}

bool Cache<std::string>::contains(std::string str) {
    for(int i=0;i<cache.size();i++)
        if(cache[i][0] == str[0])
            return true;
	return false;

}
void Cache<std::string>::print() {
    for(int i=0;i<cache.size();i++)
       std::cout<<cache[i]<<" ";
}

#endif

