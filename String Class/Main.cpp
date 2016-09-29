#include "String Class Header.h"
#include <cassert>
#include <windows.h>
#include <iostream>
using namespace std;


int main()
{

	cout << "Please enter 2 strings.... \n";
	
	MyString firstString = MyString(firstString.stringInput());
	MyString secondString = MyString(secondString.stringInput());
	system("cls");
	cout << "[=============================================================] \n";
	
	
	cout << "First string entered has " <<firstString.Length()  << " characters... \n \n";
	cout << "Second string entered has " << secondString.Length() << " characters... \n \n";
	
	
	
	firstString.Compare(secondString);
	secondString.characterAtIndex(2);
	firstString.characterAtIndex(2);

	cout <<"Append ~~>> "<< firstString.Append(secondString) << " <<~~ Append" << "\n";

	cout << "Prepend ~~>> " << secondString.Prepend(firstString) << " <<~~ Prepend" << "\n \n";

	cout << "lowercase ~~>> " << secondString.ToLower()<< " <<~~ lowercase " <<"\n \n";
	cout <<"lowercase ~~>> " <<firstString.ToLower()<< " <<~~ lowercase " <<"\n";
	
	cout << "\n";
	
	cout << "UPPERCASE ~~>> " << secondString.ToUpper() << " <<~~ UPPERCASE " << "\n \n";
	cout << "UPPERCASE ~~>> " << firstString.ToUpper() << " <<~~ UPPERCASE " << "\n";
	
	
	cout << "[=============================================================] \n";
	cout << "\n";
	system("pause");
	
	
}