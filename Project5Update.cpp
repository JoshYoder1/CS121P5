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
	std::string item;
	int counter;

	file.open("data.csv");
	while (getline(file, line)){
		std::cout << line << std::endl;
	
		//clear streams
		ss.clear();
		ss.str("");
		converter.clear();
		converter.str("");
		int n1;
		int n2;
		std::string temp;

		ss.str(line);
		std::getline(ss, temp, ",");
		n1 = std::stoi(temp);

		//convert
/*		converter << ssCounter;
		converter >> counter;
*/
		//print
		std::cout << n1 << std::endl;

	}// end while
	file.close();
	return 0;
}// end main
