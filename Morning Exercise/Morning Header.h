#pragma once
#include <Windows.h>
#include <iostream>
#include <string.h>

using namespace std;




void gist2()
{
	/*Write a function that takes two parameters a pointer to an array and the number of elements then populate the array with all even numbers.*/


}


char * gist3(char * gist3_array) 
{
	// Create a function that takes in a character array and reverses the string stored inside of it.
	
		
	int i = strlen(gist3_array)-1;
	int j = 0;
	char  gist3[6];
	while (j!=6)
	{
		gist3[j] = gist3_array[i];


		++j;
		i--;

	}
	gist3[j] = 0;
	return gist3;

}


void gist4()
{
	/*Create a Cat class with a private char variable called m_name.
	Then create a public constructor that has no arguments. 
	You will need one more function of return type void called NameMe, this takes in a character as an argument and needs to assign this character to the value of m_name.
	Once you have your class created, Create an array of type Cat of size 26. 
	Then populate the names of these cats each with a different letter of the alphabet starting with capital A and every other cats name should be a lower case letter (A,b,C,d,E,f,G,...). 
	You cannot use a for loop and you cannot print to the console.*/


}



void gist5()
{
	/*Create a function that takes in two arguments, One that points to an array of integers and one for the size of the array.
	This function will return the value in the array that appears the most times*/


}



void gist6(char &a, char &b)
{
	/*Create a function that swaps the value of two integers with out the use of a temporary variable.
	If not completed on time.You must complete the problem using characters instead of integers.*/
		
		a = a + b;
		b = a - b;
		a = a - b;
	


}