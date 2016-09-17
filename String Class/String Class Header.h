#pragma once
#include <windows.h>
#include <iostream>
using namespace std;

class StringAssignment
{
public: 
	StringAssignment();
	StringAssignment(char *a);
	int stringSize(char *a);
	char findCharacter(int);
	bool stringCompare(char *a, char *b);
	void stringAppend(char *a, char *b);
	void stringPrepend(char *a, char *b);
	void stringTolower(char *a);
	void stringToupper(char *a);
	

private:
	char* Apples;
	


};






















