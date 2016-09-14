#include <windows.h>
#include <iostream>
#include "String Class Header.h"
using namespace std;



int main()
{
	char input = '0';
	
	
	while (input != 'q')
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


}
