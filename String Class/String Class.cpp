#include <windows.h>
#include <iostream>
#include "String Class Header.h"
using namespace std;





StringAssignment::StringAssignment(char *test)
{
	for (int i = 0; i < 266; i++)
	{
		t_data[i] = test[i];

	}

}

int StringAssignment::stringlength(char *z)
{
	int i = 0;
	while (z[i] != 0)
	{
		i++;
	}
	return i;

}

int StringAssignment::Length()
{

	int i = 0;

	while (t_data[i] != 0)
	{
		i++;
	}
	
	
	return i;

}

bool StringAssignment::Compare(StringAssignment a)
{
	bool running = true; // 'bool' statement for while loop.
	int i = 0; // Initlizing 'i' to '0'.

	while (true) // 'While' loop to compare arrays 'ex1[]' and 'ex2[]'.
	{
		if (t_data[i] == 0 && a.t_data[i] == 0) // 'If' statement comparing both arrays, (if ex1 and ex2 are equal).
		{
			cout << "The strings are identical... \n \n";
			return 0;

			break;
		}

		if (t_data[i] > a.t_data[i]) // 'If' statement comparing both arrays, (if ex2 is greater than ex1).
		{
			cout << "String " << a.t_data << " is first... \n \n";
			return 1;

			break;

		}

		if (t_data[i] < a.t_data[i]) // 'If' statement comparing both arrays, (if ex2 is less than ex1)
		{
			cout << "String " << t_data << " is first... \n \n";
			return -1;

			break;
		}

		else // 'Else' statement if other if statements are incorrect ('i' increments).
		{
			i++;
		}


	}
	cout << "\n \n";
	return true;

}

char StringAssignment::characterAtIndex(int z)
{
	
	cout << "\n";
	cout << "The character found from string " << t_data << " was " << t_data[z] << "... \n";
	
	cout << "\n \n";
	if (z > t_data[z])
	{
		cout << "There are no strings with " << z << " characters... \n";
	}



	return t_data[z]; // Returning character from character array 'findCharacter[]'. 
}

char * StringAssignment::Append(StringAssignment a)
{
	
	int i = stringlength(t_data); // destination
	int j = 0; // source

	while (a.t_data[j] != 0)
	{
		t_data[i] = a.t_data[j];
		++i;
		++j;
	}

	t_data[i] = 0;
	return t_data;
	
}

char * StringAssignment::Prepend(StringAssignment a)
{
	
	cout << "\n";
	int i = stringlength(t_data); // destination
	int j = 0; // source
	
	
	while (a.t_data[j] != 0)
	{
		t_data[i] = a.t_data[j];
		++j; // Increment source before destination
		i++; 
	}
	
	t_data[j] = 0;
	
	
	return t_data;
	

}

char * StringAssignment::ToLower()
{
	int i = 0;
	while(t_data[i]!=0)
	{
		if ((int)t_data[i] >= 65 && (int)t_data[i] <= 90)
		{
			t_data[i] = t_data[i] + 32;
		}
		i++;
	}
	
	
	return t_data;

}

char * StringAssignment::ToUpper()
{
	

	int i = 0;
	while(t_data[i]!=0)
	{
		if ((int)t_data[i] >= 97 && (int)t_data[i] <= 122 )
		{
			t_data[i] = t_data[i] - 32;
		}
		i++;
	}


	return t_data;
	
}



char * StringAssignment::stringInput()
{
	char Test1[266];

	cin >> Test1;


	for (int i = 0; i < 266; i++)
	{
		t_data[i] = Test1[i];

	}

	return Test1;

}








































































