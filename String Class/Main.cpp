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
	cout << "5.) String Prepend Exercise \n";
	cout << "6.) Lowercase String Exercise \n";
	cout << "7.) Uppercase String Exercise \n";



	cout << "\n";
	cout << "Enter 'q' to exit application... \n";
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
			s.stringPrepend("Hello I'm ", "Trent Butler ");
			break;
		}
		
		case '6':
		{
			s.stringTolower("TRENT BUTLER");
			break;

		}

		case '7':
		{
			s.stringToupper("trent butler");
			break;
		}











		default:
		{
			break;
		}
		}
			
	}

	

	
	
}