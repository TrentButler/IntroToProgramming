#pragma once
#include <windows.h>
#include <iostream>
using namespace std;

class StringAssignment
{
public:
	StringAssignment() {}
	StringAssignment(char *test);
	
	
	int Length();
	bool Compare(StringAssignment a);
	char findCharacter(int);
	int Append(StringAssignment a);
	int Prepend(StringAssignment a);
	int stringlength(char *z);
	
	char ToLower();
	/*char stringToupper();*/

	
	

	
	/*void stringInput();*/
	

	


private:

	char t_data[266];




};






















