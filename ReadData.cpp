#include <fstream>
#include <iostream>
#include <sstream>

int main(){
	std::ifstream file;
	std::string line;
	std::stringstream converter;
	std::stringstream ss;
	file.open("data.csv");
	while (getline(file, line)){
		std::cout << line << std::endl;
	}// end while
	file.close();
	return 0;
}// end main
