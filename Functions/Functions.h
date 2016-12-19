#pragma once
#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

//FUNCTIONS EXERCISE


//EXERCISE 1
//DONE
void PrintInteger(int variable)
{
	cout << variable;
}
void exercise1()
{	
	int the_variable = 1;
	PrintInteger(the_variable);
		
	PrintInteger(the_variable);

	the_variable = 2;

	PrintInteger(the_variable);
		
	PrintInteger(the_variable);

	the_variable = 3;

	PrintInteger(the_variable);
			
	PrintInteger(the_variable);
		
	PrintInteger(the_variable);
	system("pause");
}

//EXERCISE 2
//DONE
void exercise2()
{
//2. Write a function that returns the smaller of two floats that are passed to it :
// You should make a program that asks the user for two different numbers such that it

	float input1 = 0;
	float input2 = 0;

	cout << "Enter value 1: "; cin >> input1;
	cout << "Enter value 2: "; cin >> input2;

	if (input1 < input2)
	{
		cout << "The smaller number is: " << input1;
	}

	cout << "The smaller number is: " << input2;
	cout << "\n";
	system("pause");

}

//EXERCISE 3
//DONE
int exercise3()
{
	float input1 = 0;
	float input2 = 0;
	float input3 = 0;

	cout << "Enter value 1: "; cin >> input1;
	cout << "Enter value 2: "; cin >> input2;
	cout << "Enter value 3: "; cin >> input3;

	if (input1 < input2 && input1 < input3)
	{
		cout << "The smaller number is: " << input1 << "\n";
		return 1;
	}

	if (input2 < input1 && input2 < input3)
	{
		cout << "The smaller number is: " << input2 << "\n";
		return 1;
	}

	if (input3 < input2 && input3 < input1)
	{
		cout << "The smaller number is: " << input3 << "\n";
		return 1;
	}
}

//EXERCISE 4
//DONE
float Half(float number)
{
	return number / 2;
}
float exercise4()
{
	//4. The following statement calls a function named Half.
	// The Half function returns a value that
	// is half that of the argument.Write the function.
	float num = 22.2;

	return Half(num);


}

//EXERCISE 5
//DONE
int exercise5()
{
	int iNput = 0;
	int coinFlip = 0;
	
	cout << "How many times will the coin flip? "; cin >> iNput;

	for (int i = 0; i < iNput; i++)
	{
		coinFlip = rand() % 2 + 1;

		if (coinFlip == 2)
		{
			cout << "Tails \n";
		}

		if (coinFlip == 1)
		{
			cout << "Heads \n";
		}
	}
	
	system("pause");

	return 1;
}








