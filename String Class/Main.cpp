#include "String Class Header.h"

#include <windows.h>
#include <iostream>
using namespace std;


int main()
{
	StringAssignment z = StringAssignment("One");
	StringAssignment s = StringAssignment("Two");
	
	
	
	
	cout << "String has " << s.Length() << " characters... \n";
	cout << "String has " << z.Length() << " characters... \n";
	
	
	z.Compare(s);
	s.findCharacter(2);
	z.findCharacter(2);

	/*z.Append(s);

	s.Prepend(z); 
*/
	cout << s.ToLower()<<"\n";

	cout << z.ToLower()<<"\n";
	
	
	
	
	
	
	
	/*z.stringInput();*/
	

	
	////s.stringToupper();

	
	cout << "\n";
	system("pause");
	
	
}