#pragma once
#include <Windows.h>
#include <iostream>
using namespace std;

// Create a function that takes in a character array and reverses the string stored inside of it. 

void arraySwap(char *a)
{
	char ex1[66];
	char ex2[66];
	for (int i = 0; i < 66;i++)
	{
		ex1[i] = a[i];
		-ex1[i];
	}
	
	
	
	cout << ex1;
}



