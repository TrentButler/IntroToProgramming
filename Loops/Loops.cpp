#include <iostream>
#include <windows.h>
#include "Loops.h"
using namespace std;

int main() {
	
	//Exercise 4
	bool loopsProg = true;
	while (loopsProg == true)
	{
		system("cls");
		cout << "1.) Exercise 1 \n \n";
		cout << "2.) Exercise 2 \n \n";
		cout << "3.) Exercise 3 \n \n";
		cout << "Q.) Exit application \n \n";
		
		char loopsInput = '!';
		cin >> loopsInput;
		system("cls");

		switch (loopsInput)
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


		case 'Q':
		{
			loopsProg == false;
			return 1;
			break;
		}


		}








	}
	
	return 1;

}





