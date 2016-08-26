#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	/*
	std::cout << "Ex.1 Use a 'for' loop to iterate backward 100-0. \n";
	std::cout << " \n";
	system("pause");
	int a;
	for (int a = 100; a > -1; a--)
		std::cout <<" \n" << a;
		std::cout << " \n";

	system("pause");
	{
		std::cout << "- Modify the for loop to include 0 and 100. \n";
		std::cout << " \n";
		system("pause");
		int b;
		for (int b = 100; b > -1; b--)
			std::cout << " \n" << b;
		    std::cout << " \n";

	}
	system("pause");
	{
		std::cout << "- Modify the for loop to include 0 and not 100. \n";
		std::cout << " \n";
		system("pause");
		int c;
		for (int c = 99; c > -1; c--)
			std::cout << " \n" << c;
			std::cout << " \n";
	}
	system("pause");
	{
		std::cout << "- Modify the for loop to not include 0 and include 100. \n";
		std::cout << " \n";
		system("pause");
		int d;
		for (int d = 100; d > 0; d--)
			std::cout << " \n" << d;
		std::cout << " \n";
	}
	
	system("pause");
	{
		std::cout << "- Modify the for loop to decrement by 2. \n";
		std::cout << " \n";
		system("pause");
		int e;
		for (int e = 100; e > -1; e-=2)
			std::cout << " \n" << e;
		std::cout << " \n";
	}
	system("pause");
	*/
	//Exercise 2:

	
	/*
	std::cout << "- Using a for loop, iterate through numbers 0 to 100. \n";
	std::cout << " \n";
	std::cout << "- For multiples of 3 print 'Fizz' \n";
	std::cout << "- For multiples of 5 print 'Buzz' \n";
	std::cout << "- For multiples of 3 and 5 print 'FizzBuzz' \n";
	std::cout << "- Otherwise print the number. \n";
	system("pause");		
		
		for (int f = 0; f <= 100; f++)
			{
			
			if (f % 3 == 0 && f % 5 == 0)
				std::cout << "\nFizzBuzz";

			else if (f % 3 == 0)
				std::cout << "\nFizz";

			else if (f % 5 == 0)
				std::cout << "\nBuzz";

			else
				std::cout << " \n" << f;
		}
		
		std::cout << " \n";
		system("pause");
		*/ 
		
//Exercise 3
	
	int t = 0;
	while (t <= 100)
	{
		


		int display = 0;
		int g = 0;

		std::cout << "- Project Eula Problem: \n";
		std::cout << "Find the sum of all the multiples of 3 or 5 below 1000. \n";
		system("pause");

		for (int g = 0; g < 1000; g++)
		{

			if (g % 3 == 0 || g % 5 == 0)
			{
				display += g;
			}


			else
				std::cout << " \n" << g;
		}

		std::cout << " \n";
		system("pause");
		std::cout << "  \n";
		std::cout << "The sum of all multiples of 3 or 5 below 1000 is " << display << ".\n";
		std::cout << " \n";
		system("pause");

	}
	system("pause");
}





