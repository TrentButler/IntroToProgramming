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
	bool stringCompare(char *z);
	char findCharacter(int);
	int stringAppend(char *a);
	int stringPrepend(char *b);
	int stringlength(char *z);
	/*
	void stringTolower(char *a);
	void stringToupper();
	void stringInput();
	*/

	

	


private:

	char t_data[266];




};






















