/*file prologue
Name: Vinson Aiono
Course and section: CS1410-004
Instructor: Roger Debry
Assignment: Project 06 Recursion
Date: 2016-03-010
Description: 

I declare that this code was written by me and was not copied unless given code examples by professor Debry.

sudo for project

is s1.substring(0,3) == s2dddd


*/
//============================

#include "driver.h"

int main()
{
	//int a[SIZE];

	char userInput[MAX];
	
	const string line1 = "\nThis program is going to find a string with in a set of strings.";
	const string line2 = "\nPlease enter the string you wish to search: ";
	const string line3 = "\nNow enter the string you want to search for: ";
	const string line4 = "\nThe index of substring = ";
	const string s;
	const string t;

	//prompt user and get a string
	cout << line1 << endl;
	cout << line2 << endl;
	cin >> userInput;

	int index = index_of(a, userInput);

	
	cout << endl;
	system("PUASE");
	return 0;
}

int index_of(const string& s, const string& t) 
{
	return index_ofHelper( -1);
}

int index_ofHelper(int theArray[], int theKey, int start, int end)
{
		
}