#pragma once
#include <Windows.h>
#include <iostream>
using namespace std;


float Times5()
{

	float ex1 = 2.2;
	float ex2 = 4.3;
	float ex3 = 43.3;
	float five = 5;

	cout << "Enter 3 numbers to be multiplied by 5... \n";
	cout << "\n \n";
	cout << "Enter first choice "; cin >> ex1;
	ex1 * five;
	cout << "\n \n";
	cout << "Enter second choice "; cin >> ex2;
	ex2 * five;
	cout << "\n \n";
	cout << "Enter third choice "; cin >> ex3;
	ex3 * five;

	cout << "Values returned are: \n";
	cout << "\n \n";
	cout << "First choice: " << ex1 << " \n";
	cout << "Second choice: " << ex2 << " \n";
	cout << "Third choice: " << ex3 << " \n";
	





	return 1;


}






float Mult5(float a, float b, float c)
{
	
	
	return (a + b + c) * 5;


}