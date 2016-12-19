#include <iostream>
#include <windows.h>
#include "Conditional.h"
using namespace std;
int main()
{	//EXCERCISE - CONDITIONAL STATEMENTS
	system("color 0a");
bool runConditional = true;

while (runConditional == true)
{
	system("cls");
	cout << "1.) Exercise 1 \n";
	cout << "2.) Exercise 2 \n";
	cout << "3.) Exercise 3 \n";
	cout << "4.) Exercise 4 \n";
	cout << "5.) Exercise 5 \n";
	cout << "6.) Exercise 6 \n";
	cout << "7.) Exercise 7 \n";
	cout << "8.) Exercise 8 \n";
	cout << "9.) Exercise 9 \n";


	cout << "Q.) Exit Application \n";
	char conditionInput = '!';
	cin >> conditionInput;
	system("cls");
	switch (conditionInput)
	{
	case '1':
	{
		exercise1();
		break;
	}

	case '2':
	{
		exercise2();
		break;
	}

	case '3':
	{
		exercise3();
		break;
	}

	case '4':
	{
		exercise4();
		break;
	}

	case '5':
	{
		exercise5();
		break;
	}

	case '6':
	{
		exercise6();
		break;
	}

	case '7':
	{
		exercise7();
		break;
	}

	case '8':
	{
		exercise8();
		break;
	}

	case '9':
	{
		exercise9();
		break;
	}
	



















	case 'Q':
	{
		return 0;
	}




	}





}

system("pause");
return 1;





}
