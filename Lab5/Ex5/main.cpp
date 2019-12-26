#include <iostream>

#include "Cache.h"
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	_wsetlocale(LC_ALL,L"russian");

 Cache<int> cache;
 cache.put(1); // так должно работать
 cache.put(2);
 cache.put(3);
 cache += 5; // так тоже должно работать
 cache.print();

 Cache<std::string> voc;
 voc.put("OK");

 std::cout <<"\n" <<voc.contains("Only") << std::endl; // 1
 std::cout << cache.contains(5) << std::endl; // 1

return 0;
}