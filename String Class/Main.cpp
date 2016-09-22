#include "String Class Header.h"

#include <windows.h>
#include <iostream>
using namespace std;


int main()
{

	StringAssignment s = StringAssignment();
		
	s.stringInput();
	s.stringSize();
	s.findCharacter(4);
	s.stringCompare();
	/*s.stringAppend();
	s.stringToupper();*/

	
	cout << "\n";
	system("pause");
	
	
}