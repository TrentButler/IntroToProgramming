#include "String Class Header.h"

#include <windows.h>
#include <iostream>
using namespace std;


int main()
{

	StringAssignment s = StringAssignment("Trent Butler");
	StringAssignment string = StringAssignment(" Goodbye!"); // use this instead of "goodbye" in the function call...
	s.Length();
	s.stringCompare("GoodBYE");
	s.findCharacter(2);
	s.stringAppend(" Goodbye!");
	s.stringPrepend("Hello I'm ");
	
	//s.stringInput();

	

	
	////s.stringToupper();

	
	cout << "\n";
	system("pause");
	
	
}