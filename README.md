# CS121P5
include sstream
include iostream
include fstream

int main():
	create std::ofstream file
	create string linei
	create std::stringstream converter
	create std::stringstream ss

	open file(data.csv)
	while(file, line):
		output line
	close file
	return 0
		
