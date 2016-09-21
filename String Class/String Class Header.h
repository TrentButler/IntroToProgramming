#pragma once
#include <windows.h>
#include <iostream>
using namespace std;

class StringAssignment
{
public: 
	StringAssignment() {};
	StringAssignment(char *test);
	

	int stringSize();
	char findCharacter(int);
	bool stringCompare();
	void stringAppend(char *a, char *b);
	void stringPrepend(char *a, char *b);
	void stringTolower(char *a);
	void stringToupper(char *a);
	

private:

	char apples[66] = { "TEST" };
	char pears[66] = { "Second TEST" };
	


};






















