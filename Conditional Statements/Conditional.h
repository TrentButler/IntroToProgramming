#pragma once
#include <windows.h>
#include <iostream>
using namespace std;


/*Implement a C++ program that reads five(5) numbers and displays the numbers in
ascending order if the sum of the five numbers is positive and in descending order if the sum
is negative.If the sum is equal to zero then the program must display the numbers in the
same order that they were entered*/


int exercise1()
{
	//1. Write an if statement that assigns 100 to x when y is equal to zero"
	int x = 0;
	int y = 0;

	if (y == 0)
	{
		x = 100;
	}
	return x;
}

void exercise2()
{
	cout << "2. Write program that displays the larger of two numbers.";
	cout << " \n";
	cout << " \n";
	cout << "Please enter two numbers";
	cout << " \n";
	int num1;
	int num2;
	cin >> num1 >> num2;
	int display = (num1 > num2) ? num1 : num2;
	cout << " \n";
	cout << "The larger number is: "<< display;
	cout << " \n";
	system("pause");
	
}

int exercise3()
{
	
	int fiveNums[5] = { 1,2,3,4,5 };
	int sumNums = fiveNums[0] + fiveNums[1] + fiveNums[2] + fiveNums[3] + fiveNums[4];

	if (sumNums > 0)
	{
		//ASENDING ORDER
		//FIND THE LARGEST VALUES
		
		int j = 4;
		for (int i = 0; i < 5; i++)
		{
			if (fiveNums[i] > fiveNums[j])
			{
				cout << fiveNums[i];
				j--;
			}
		}
	}

	if (sumNums < 0)
	{
		//DECENDING ORDER
		int j = 4;

		for (int i = 0; i < 4; i++)
		{
			if (fiveNums[i] < fiveNums[j])
			{
				cout << fiveNums[i];
				j--;
			}

		}
	}

	if (sumNums == 0)
	{
		//ORDER AS ENTERED
		for (int i = 0; i < 5; i++)
		{
			cout << fiveNums[i];
		}

	}


	return 1;
}

void exercise4()
{
		cout << " \n";
		cout << "4. Convert 'if' statement into a 'switch' statement. \n";
		cout << "Pick a number between 1-4 \n";
	
		int choice;
		cin >> choice;
		
		switch (choice){
			
				case 1:
					std::cout << "1 \n";
					break;
				
				case 2:
					std::cout << "2 or 3 \n";
					break;
	
				case 3:
					std::cout<< "2 or 3 \n";
					break;
				
				case 4:
					std::cout << "4 \n";
					break;
	
				default:
					std::cout << "Invalid \n";
					break;
	
		}
	
		system("pause");

}

void exercise5()
{
		std::cout<<"5. Convert the following if statement into a ternary operator";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << "If (x=0) then 'y' will be '0' \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << "If not, 'y' will be (10 / x) \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << "Please enter a number for 'x' \n";
		std::cout << " \n";
		int xInput;
		std::cin >> xInput;
		int y = (xInput == 0) ? 0 : (10 / xInput);
		
		std::cout << " \n";
		std::cout << y<< " \n";
		std::cout << " \n";
		
		system("pause");



}

void exercise6()
{
		cout << " \n";
		cout << "6. Write a program that will peform the appropriate math based on user input. \n";
		cout << " \n";
		cout << " \n";
		float num3;
		float num4;
		char operate;
		float display2;
			
		cout << "Please enter first number. \n";
		cin >> num3;
		cout << "Please enter operator (+ - / *) \n";
		cin >> operate;
		cout << "Please enter second number. \n";
		cin >> num4;
	
		switch (operate){

			case '+':
			{
				display2 = num3 + num4;
				break;
			}				
	
			case '*':
			{
				display2 = num3 * num4;
				break;
			}				
	
			case '-':
			{
				display2 = num3 - num4;
				break;
			}				
	
			case '/':
			{
				display2 = num3 / num4;
				break;
			}
	
			default:
			{
				cout << "Incorrect operator, please enter (+ - / *) \n";
				break;
			}			
		}

		cout << "\n";	
		cout << "The answer is " << display2 << "\n";
	
		system("pause");

}

void exercise7()
{
		std::cout << "Please enter a number 1-12 to represent the 12 months. \n";
		std::cout << " \n";
		std::cout << "This program will display the number of days in that given month. \n";
		std::cout << " \n";
	
		int Input;
		std::cin >> Input;
		
		if (Input == 1) {
			std::cout << "The month is January. \n";
			std::cout << "It has 31 days. \n";
			
		}
		else if (Input == 2) {
			std::cout << "The month is February. \n";
			std::cout << "It has 28 days. \n";
	
		}
		else if (Input == 3) {
			std::cout << "The month is March. \n";
			std::cout << "It has 31 days. \n";
		}
		else if (Input == 4) {
			std::cout << "The month is April. \n";
			std::cout << "It has 30 days. \n";
		}
		else if (Input == 5) {
			std::cout << "The month is May. \n";
			std::cout << "It has 31 days. \n";
		}
		else if (Input == 6) {
			std::cout << "The month is June. \n";
			std::cout << "It has 30 days. \n";
		}
		else if (Input == 7) {
			std::cout << "The month is July. \n";
			std::cout << "It has 31 days. \n";
		}
		else if (Input == 8) {
			std::cout << "The month is August. \n";
			std::cout << "It has 31 days. \n";
		
		}
		else if (Input == 9) {
			std::cout << "The month is September. \n";
			std::cout << "It has 30 days. \n";
		}
		else if (Input == 10) {
			std::cout << "The month is October. \n";
			std::cout << "It has 31 days. \n";
		}
		else if (Input == 11) {
			std::cout << "The month is November. \n";
			std::cout << "It has 30 days. \n";
		}
		else if (Input == 12) {
			std::cout << "The month is December. \n";
			std::cout << "It has 31 days. \n";
		}
		std::cout << " \n";
		system("pause");

}

void exercise8()
{
	std::cout << "8. Based on values given, display the return value.";
	std::cout << " \n";
	std::cout << " \n";
	std::cout << "Let 1 = True and 0 = False";
	std::cout << " \n";
	std::cout << " \n";
	system("pause");
	
	bool flag = true;
	int numPos = 35, numNeg = -55;
	char frstChar = 'J', scndChar = '0';
	double frstPrice = 5.60;
	int display1;
	//a.)
	std::cout << " \n";
	std::cout << "Is numPos > numNeg";
	std::cout << " \n";
	std::cout << " \n";
	display1 = (numPos > numNeg) ? true : false;
	std::cout << display1;
	std:cout << " \n";
	std::cout << " \n";
	system("pause");
	//b.)
	std::cout << " \n";
	std::cout << "Is frstChar > scndChar?";
	std::cout << " \n";
	std::cout << " \n";
	display1 = (frstChar > scndChar) ? true : false;
	std::cout << display1;
	std::cout << " \n";
	std::cout << " \n";
	system("pause");
	//c.)
	std::cout << " \n";
	std::cout << "!(numPos + numNeg)";
	std::cout << " \n";
	std::cout << " \n";
	display1 = (!(numPos + numNeg)) ? true : false;
	std::cout << display1;
	std::cout << " \n";
	std::cout << " \n";
	system("pause");
	//d.)
	std::cout << " \n";
	std::cout << "(numPos == -30) || (numNeg == -55)";
	std::cout << " \n";
	std::cout << " \n";
	display1 = ((numPos == -30) || (numNeg == -55)) ? true : false;
	std::cout << display1;
	std::cout << " \n";
	std::cout << " \n";
	system("pause");
	//e.)
	std::cout << " \n";
	std::cout << "(frstPrice >= 4.1) && (frstPrice <= 9.9)";
	std::cout << " \n";
	std::cout << " \n";
	display1 = ((frstPrice >= 4.1) && (frstPrice <= 9.9)) ? true : false;
	std::cout << display1;
	std::cout << " \n";
	std::cout << " \n";
	system("pause");
	//f.)
	std::cout << " \n";
	std::cout << "!flag && (scndChar <= 'R')";
	std::cout << " \n";
	std::cout << " \n";
	display1 = (!flag && (scndChar <= 'R')) ? true : false;
	std::cout << display1;
	std::cout << " \n";
	std::cout << " \n";
	system("pause");
	//g.)
	std::cout << " \n";
	std::cout << "(numPos < 66) || (flag && numPos > 35)";
	std::cout << " \n";
	std::cout << " \n";
	display1 = ((numPos < 66) || (flag && numPos > 35)) ? true : false;
	std::cout << display1;
	std::cout << " \n";
	std::cout << " \n";
	system("pause");
	//h.)
	std::cout << " \n";
	std::cout << "++numPos == 36";
	std::cout << " \n";
	std::cout << " \n";
	display1 = (++numPos == 36) ? true : false;
	std::cout << display1;
	std::cout << " \n";
	std::cout << " \n";
	system("pause");
	//i.)
	std::cout << " \n";
	std::cout << "numPos++ == 36";
	std::cout << " \n";
	std::cout << " \n";
	display1 = (numPos++ == 36) ? true : false;
	std::cout << display1;
	std::cout << " \n";
	std::cout << " \n";
	system("pause");
	//j.)
	std::cout << " \n";
	std::cout << "(frstChar == 'j') || (frstChar == 'J'";
	std::cout << " \n";
	std::cout << " \n";
	display1 = ((frstChar == 'j') || (frstChar == 'J')) ? true : false;
	std::cout << display1;
	std::cout << " \n";
	std::cout << " \n";
	system("pause");



}

void exercise9()
{
	std::cout << " \n";
	std::cout << "9. Evaluate logical expressions, where 'a' is equal to true and 'b' is equal to false \n";
	std::cout << " \n";
	std::cout << " \n";
	//a.)
	std::cout << "a. (a || b) || (a && b) \n";
	std::cout << "The logical expression is True. \n";
	std::cout << " \n";
	std::cout << " \n";
	//b.)
	std::cout << "b. !((!a) && (a)) || a && b) \n";
	std::cout << "The logical expression is True. \n";
	std::cout << " \n";
	std::cout << " \n";
	//c.)
	std::cout << "c. !((5 || a) || (!b)) && (!(a) && b) \n";
	std::cout << " The logical expression is False. \n";
	std::cout << " \n";
	std::cout << " \n";
	//d.)
	std::cout << "d. a || b && a \n";
	std::cout << "The logical expression is True \n";
	std::cout << " \n";
	std::cout << " \n";
	//e.)
	std::cout << "e. !a&&b \n";
	std::cout << "The logical expression is False. \n";
	std::cout << " \n";
	std::cout << " \n";

	system("pause");

}










