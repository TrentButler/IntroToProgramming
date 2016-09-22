#pragma once
#include <windows.h>
#include <iostream>
using namespace std;

class StringAssignment
{
public:
	StringAssignment() {};
	
	
	int stringSize();
	char findCharacter(int);
	bool stringCompare();
	void stringAppend();
	void stringPrepend(char *a, char *b);
	void stringTolower(char *a);
	void stringToupper();
	void stringInput();


private:

	char apples[266];
	char pears[266];
	int stringLength;



};






















