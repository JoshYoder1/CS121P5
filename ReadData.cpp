#include <fstream>
#include <iostream>
#include <sstream>

int main(){
	// initialize variables
	std::ifstream file;
	std::string line;
	std::stringstream converter;
	std::stringstream ss;
	std::string ssCounter;
	std::string item

	file.open("data.csv");
	while (getline(file, line)){
		std::cout << line << std::endl;
	
		//clear streams
		ss.clear();
		ss.str("");
		converter.clear();
		converter("");

		ss.str(line);
		getline(ss, ssCounter, ",");
		getline(ss, item);

		//convert
		converter << ssCounter;
		converter >> counter;

		//print
		std::cout << line << item << std::endl;

	}// end while
	file.close();
	return 0;
}// end main
