#include "String Class Header.h"

#include <windows.h>
#include <iostream>
using namespace std;


int main()
{
	StringAssignment z = StringAssignment(z.stringInput());
	StringAssignment s = StringAssignment(s.stringInput());
		
	cout << "String has " << s.Length() << " characters... \n";
	cout << "String has " << z.Length() << " characters... \n";
	
	
	z.Compare(s);
	s.characterAtIndex(2);
	z.characterAtIndex(2);

	cout << z.Append(s) << "\n";

	cout << s.Prepend(z) << "\n";

	cout << "Lower: \n";
	cout << s.ToLower()<<"\n";
	cout << z.ToLower()<<"\n";
	
	cout << "\n";
	cout << "Upper: \n";
	cout << s.ToUpper() << "\n";
	cout << z.ToUpper() << "\n";
		
	cout << "\n";
	system("pause");
	
	
}