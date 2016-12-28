#include "Morning Header.h"
#include <Windows.h>
#include <iostream>
using namespace std;


int main()
{
	bool runMorning = true;
	char gist6_var1 = 'A';
	char gist6_var2 = 'z';
	
	while (runMorning == true)
	{
		system("cls");
		
		cout << "2.) Gist 2 \n";
		cout << "3.) Gist 3 \n";
		cout << "4.) Gist 4 \n";
		cout << "5.) Gist 5 \n";
		cout << "6.) Gist 6 \n";
		cout << "7.) PsudoMult \n";
		cout << "Q.) Exit Application \n";
		
		char morningInput = '!';
		cin >> morningInput;
		system("cls");

		switch (morningInput)
		{
		
		case '2':
		{
			gist2();
			break;
		}

		case '3':
		{
			cout<<gist3("Hello");
			break;
		}

		case '4':
		{
			gist4();
			break;
		}

		case '5':
		{
			gist5();
			break;
		}

		case '6':
		{
			gist6(gist6_var1, gist6_var2);
			break;
		}

		case '7':
		{
			psudoMult(12, 12);
			break;
		}

		case 'Q':
		{
			return 0;
		}

		}
		
	}
		
	
	return 1;

}