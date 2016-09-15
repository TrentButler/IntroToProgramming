#include "String Class Header.h"

#include <windows.h>
#include <iostream>
using namespace std;


int main()
{

	//char input = '0';


	/* while (input != 'q')
	{
	cin >> input;

	switch (input)
	{
	case '1': //String Length Exercise
	{
	stringLen();
	break;
	}

	case '3': //String Compare Exercise
	{
	stringCompare();
	break;
	}

	case '4': //String Append Exercise
	{
	stringAppend();
	break;
	}

	case '5': //String Prepend Exercise
	{
	stringPrepend();
	break;
	}


	case '7':
	{

	abcString();
	break;
	}

	case '8':
	{
	ABCString();
	break;
	}


	case '10': //String Copy Example
	{
	stringCopy();
	break;
	}





	case 'q':
	{
	break;
	}
	}


	}

	*/

	StringAssignment s = StringAssignment();

	
	
	cout << "String Class Assignment";
	cout << " \n \n";
	
	char input = '0';


	while (input != 'q')
	{
		
		cin >> input;
		switch (input)
		{
		case '1':
		{
			s.stringSize();
			break;
		}

		case '2':
		{
			s.findCharacter(0);
			break;
		}

		case '3':
		{
			s.stringCompare();
				break;
		}













		default:
		{
			break;
		}
		}
			
	}

	

	
	
}