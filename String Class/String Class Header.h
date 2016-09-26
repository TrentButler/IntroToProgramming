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
	char characterAtIndex(int);
	char * Append(StringAssignment a);
	char * Prepend(StringAssignment a);
	int stringlength(char *z);
	
	char * ToLower();
	char * ToUpper();
	
	char * stringInput();
	

	


private:

	char t_data[266];




};






















