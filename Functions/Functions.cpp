//FUNCTIONS EXERCISE

#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;
float number1;
float number2;
float number3;
float number = 16.721f;
float result = 0;
int coinChance;
int coinFlip = 0;
int i;
int N;
int display;


float smallNumber()
	{
	
	if (number1 > number2)
		cout << "The smaller number is: " << number2;

	if (number1 < number2)
		cout << "The smaller number is: " << number1;


	return 0;
	}


float Half()
{
	result = number / 2;
	cout << result;
	return 0;
}

int SumTo(int N)
{
	for (int i = 0; i <= N; i++)
		display += i;
		


	
	return display;
}





int CoinToss()
{

	
	for (int i = 0; i < coinFlip; i++)
	{
		coinChance = rand();
		if (coinChance % 2 == 0)
			cout << "\n" << "Heads";

		else
			cout << "\n" << "Tails";
	}


	return 0;
}


int a;
int display3;

int SumArray(int integer_array[], int a)
{


	int test;
	for (int i = 0; i < 5; i++)
		display3 += integer_array[i];


	return display3;

}





int b;
int display4;

int MinInArray(int integer_array[], int b)
{

	int test = integer_array[0];
	int test2 = integer_array[0];
	for (int j = 0; j < 7; j++)

		if (test > integer_array[j])
			test = integer_array[j];

	display4 = test;




	return display4;


}


int MultiplyByIndex(int integer_array[], int output_array[], int c)
{




	output_array[0] = integer_array[0] * 0;
	output_array[1] = integer_array[1] * 1;
	output_array[2] = integer_array[2] * 2;
	output_array[3] = integer_array[3] * 3;
	output_array[4] = integer_array[4] * 4;
	output_array[5] = integer_array[5] * 5;
	output_array[6] = integer_array[6] * 6;
	output_array[7] = integer_array[7] * 7;



	return 0;



}




int main()
{
	
//EXERCISE 1
/*	
	
	cout << "1. What is the output of this program? \n";
	cout << "\n";
	cout << "1 \n";
	cout << "1 \n";
	cout << "2 \n";
	cout << "2 \n";
	cout << "3 \n";
	cout << "2 \n";
	cout << "1 \n";
	cout << "\n";

		system("pause");
		*/

//EXERCISE 2
		/*
// - Write a function that returns the smaller of two floats that are passed to it:
You should make a program that asks the user for two different numbers. 
Pass the two numbers into a fuinciton and output what the funciton returns.

		cin >> number1 >> number2;
		smallNumber();
	
		cout << "\n";
	system("pause");
	*/

//EXERCISE 3
	/* - Add another function with the same name as the one you wrote in question 2, but with
	three floats instead of two. What is this language feature called ?
		*/

//EXERCISE 4
	/* - The following statement calls a function named Half.
	The Half function returns a value that is half that of the argument. 
	Write the function.
	
	
	
	cout << "4. The Half function returns a value that is half that of the argument. \n";
	cout << "- If the number is 16.721f \n"; \
	cout << "- What is half? \n";
	cout << "\n";
	
	Half();
	cout << "\n";
	cout << "\n";
	system("pause");
	*/

//EXERCISE 5
	/* - Write a function named CoinToss that simulates the tossing of a coin.
		The function should use the standard library rand() function in order to generate a
		display of either �heads� or �tails�.
		The rand() can be added by adding "#include <cstflib>" to the top of your program. 
		It returns a random number between 0 and 32767.
		Demonstrate the function in a program that asks the user how many times they want to
		toss the coin, and then simulates the tossing of the coin that number of times.
		

	
	
	cout << "Coin Toss \n";
	cout << "How many times will the coin be tossed? \n";
	cin >> coinFlip;
	CoinToss();
	cout << "\n";
	system("pause");
	*/

	
//EXERCISE 6
	/* 6. Find the error in each of the following functions and explain how to fix them.
	
	//
	//int sum(int x, int y)
	//{
	//	int result;
	//	result = x + y;
	//}

	//- This function does not return a value.

	//
	//int sum (int n)
	//{
	//if (0 == n)
	//return 0;
	//else
	//n = n + n;
	//}

	//- .



	//#include <iostream>
	//int main()
	//{
	//double x = 13.6;
	//std::cout << "square of 13.6 = " << square(x) << std::endl;
	//}
	//}
	//int square (int x)
	//{
	//return x * x;

	//- "square(x)" is not defined.
	//- Function is not being called, defined after "int main()".
	*/

//EXERCISE 7
/*
cout << "7. Write a function called SumTo that accepts an integer parameter N and returns the sum of all integers from 1 to N, including N.";
cout << "\n";
cout << "\n";

int result = SumTo(3); //result = 1 + 2 + 3 = 6
std::cout << result << std::endl;
result = SumTo(15); //result should now be 120
std::cout << result << std::endl;


system("pause");
*/

//EXERCISE 8
/* 8. Write a function that takes as its parameters an array of intergers and the size of the array and return the sum of the values in the array.
cout << "Write a function that takes as its paramethers an array of intergers \n";
cout << " and the size of the array and return the sum. \n";
cout << "\n";
int integer_array[5] = { 7, 3, 2, 4, 9 };
int result = SumArray(integer_array, 5); //result = 25
std::cout << result << std::endl;
	
system("pause");

*/


//EXERCISE 9
/*
//9. Write a function that takes as its parameter an array of integers and the size of the array
//and returns the minimum of the values in the array.

int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
int result = MinInArray(integer_array, 7); //result = 4
std::cout << result << std::endl;


system("pause");
*/


//EXERCISE 10
/*
Write a function that takes as its parameter an array called input_array of integers, the
array size and a second array of the same size called output_array.Fill each element in the
second array to be the value in the same index of input_array multiplied by its index in the
array
*/

int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
int output_array[7] = {};
MultiplyByIndex(integer_array, output_array, 7);
//output_array should be {0, 15, 14, 12, 52, 95, 48};
return 0;


}

