

/*
 * PROGRAMMER:     Grayson Wilcox
 * Assignment:      Ola 2
 * Class:           CSCI 2170
 * Course Instructor:  Dr. Cen Li
 * Due Date:          Thursday, 2/13/2020
 * Description:     
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
using namespace std;

string makeAcro(string line);

int main(int argc, char **argv)
{   
	string line;
	ifstream myIn;
	myIn.open("../Acronym.dat");
	assert(myIn);
	while (getline(myIn,line)){
		cout << line << "-->" << makeAcro(line) << endl;
	}
	
	return 0;
}

string makeAcro(string line)
{	
	int index = 0;
	string acro;
	acro += toupper(line[index]);
	while (line.find(" ",index)!= -1 ){
		 index = line.find(" ",index)+1;
		 acro += toupper(line[index]);
		 
	}	
	return (acro);
}

