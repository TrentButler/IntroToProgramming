#include "String Class Header.h"

#include <windows.h>
#include <iostream>
using namespace std;


int main()
{

	StringAssignment s = StringAssignment();

	
	cout << "String Class Assignment";
	cout << " \n \n";
	cout << "1.) String Size Exercise \n";
	cout << "2.) Find Character Exercise \n";
	cout << "3.) String Compare Exercise \n";
	cout << "4.) String Append Exercise \n";




	cout << "\n \n";
	
	char input = '0';
	while (input != 'q')
	{
		
		cout << "\n"; cin >> input;
		system("cls");
		switch (input)
		{
		case '1':
		{
			s.stringSize("abcdefghijklmnopqrstuvwxyz");
			break;
		}

		case '2':
		{
			s.findCharacter(2);
			break;
		}

		case '3':
		{
			s.stringCompare("abcdefghijk", "abcdefghi");
			break;
		}

		case '4':
		{
			s.stringAppend("Hello I'm ", "Trent Butler");
			break;
		}

		case '5':
		{

		}











		default:
		{
			break;
		}
		}
			
	}

	

	
	
}