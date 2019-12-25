#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
	setlocale(LC_ALL,"ru");
	_wsetlocale(LC_ALL,L"russian");
	map <string,int> txtmap;
	std::ifstream fout("TEXT.txt");
	if (fout.is_open()) {
		char buffer[1024];
		while (!fout.eof()) { 
			fout.getline(buffer, 1024);
			char * pch = strtok (buffer," ,.-:!;?");
			while (pch != NULL){
      			string s(pch);
				  std::transform(s.begin(), s.end(), s.begin(), ::tolower);
				if(s.length()>4){
					auto kek = txtmap.find(s);
					if(kek!=txtmap.end())
						kek->second++;
					else
						 txtmap.insert ( pair<string,int>(s,1) );
				}
				  pch = strtok (NULL, " ,.-:!;?");
	  		}
			
		}

	}
	else{
		std::wcout<<L"Файла нет или он уже открыт";
	}

	for (auto kek = txtmap.begin(); kek != txtmap.end(); kek++)
		if(kek->second>6)
			std::cout << kek->first << " : " << kek->second << std::endl;

return 0;
}