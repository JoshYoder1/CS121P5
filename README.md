# CS121P5
Project5.cpp is a working prototype that simply prints the file

Project5Update.cpp is early version of the assignment.
Line 29 was giving issues and I couldn't figure out why. 


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
		
