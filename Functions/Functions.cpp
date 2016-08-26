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
	cout << display;





	return 0;
}



/*Write a function named CoinToss that simulates the tossing of a coin.
The function should use the standard library rand() function in order to generate a
display of either “heads” or “tails”.
The rand() can be added by adding "#include <cstflib>" to the top of your program.
It returns a random number between 0 and 32767.
Demonstrate the function in a program that asks the user how many times they want to
toss the coin, and then simulates the tossing of the coin that number of times.
*/

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
	The Half function returns a value that is half that of the argument. 	Write the function.	
	
	
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
		display of either “heads” or “tails”.
		The rand() can be added by adding "#include <cstflib>" to the top of your program. 
		It returns a random number between 0 and 32767.
		Demonstrate the function in a program that asks the user how many times they want to
		toss the coin, and then simulates the tossing of the coin that number of times.		*/	
	/*
	cout << "Coin Toss \n";
	cout << "How many times will the coin be tossed? \n";
	cin >> coinFlip;
	CoinToss();
	cout << "\n";
	system("pause");
	*/



//EXERCISE 6
	// 6. Find the error in each of the following functions and explain how to fix them.	///*
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
	

//EXERCISE 7

cout << "7. Write a function called SumTo that accepts an integer parameter N and returns the sum of all integers from 1 to N, including N.";
cout << "\n";
cout << "\n";

int result = SumTo(3); //result = 1 + 2 + 3 = 6
std::cout << result << std::endl;
result = SumTo(15); //result should now be 120
std::cout << result << std::endl;

system("pause");


	





}

