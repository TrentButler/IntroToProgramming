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

	cout << "Lower: \n";
	cout << secondString.ToLower()<<"\n \n";
	cout << firstString.ToLower()<<"\n";
	
	cout << "\n";
	cout << "Upper: \n";
	cout << secondString.ToUpper() << "\n \n";
	cout << firstString.ToUpper() << "\n";
	
	
	cout << "[=============================================================] \n";
	cout << "\n";
	system("pause");
	
	
}