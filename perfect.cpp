/*
 * PROGRAMMER:     Grayson Wilcox
 * Assignment:      Ola 2
 * Class:           CSCI 2170
 * Course Instructor:  Dr. Cen Li
 * Due Date:          Thursday, 2/13/2020
 * Description:       Finds all perfect numbers from 1 to 10000
*/
#include <iostream>
using namespace std;


bool isPerfect(int num);

int main(int argc, char **argv)
{
	for(int i=1;i<10000;i++) // loops through all numbers that need to be checked for perfect status 
		if (isPerfect(i) == true)
			cout << i << endl;

	
	return 0;
}

bool isPerfect(int num) //checks all numbers that are passed in from the loop to see if they are perfect
{
	int sum = 0;
	for(int j=1; j<=(num/2);j++)
		if (num % j == 0)
			sum += j;
	if (num == sum)	// divisors must equal number itself 
		return (true);
	else	
		return (false);	
}

