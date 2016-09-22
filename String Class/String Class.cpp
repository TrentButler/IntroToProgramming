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

bool StringAssignment::stringCompare(char *z)
{
	
	bool running = true; // 'bool' statement for while loop.
	int i = 0; // Initlizing 'i' to '0'.

	while (true) // 'While' loop to compare arrays 'ex1[]' and 'ex2[]'.
	{
		if (t_data[i] == 0 && z[i] == 0) // 'If' statement comparing both arrays, (if ex1 and ex2 are equal).
		{
			cout << "The strings are identical... \n \n";
			return 0;

			break;
		}

		if (t_data[i] > z[i]) // 'If' statement comparing both arrays, (if ex2 is greater than ex1).
		{
			cout << "String " << t_data << " is first... \n \n";
			return 1;

			break;

		}

		if (t_data[i] < z[i]) // 'If' statement comparing both arrays, (if ex2 is less than ex1)
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

char StringAssignment::findCharacter(int z)
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

int StringAssignment::stringAppend(char *a)
{
	
	int i = stringlength(t_data); // destination
	int j = 0; // source

	while (a[j] != 0)
	{
		t_data[i] = a[j];
		++i;
		++j;
	}

	t_data[i] = 0;
	cout << t_data;
	cout << "\n";
	return i;
	
}



int StringAssignment::stringPrepend(char *b)
{
	cout << "\n";
	int i = (stringlength(t_data)*0); // destination
	int j = 0; // source
	t_data[i] = 0;
	while (b[j] != 0)
	{
		t_data[i] = b[j];
		++i;
		j++;
	}

	
	cout << t_data;
	return i;
	

}
































//void StringAssignment::stringTolower(char *a)
//{
//	cout << "Convert uppercase string to lowercase string... \n";
//	cout << "\n \n";
//	char ex1[66]; // Setting character array 'ex1[]' with the size of '266'.

//	for (int i = 0; i < 66; i++) // 'For' loop to iterate through character arrays.
//	{
//		ex1[i] = a[i]; // Populating character array 'ex1[]' with character array 'a[]'.
//	}
//	
//	
//
//	char b; // Initlizing character 'b'.
//	int i = 0; // Initlizing integer 'i' to '0'.
//	
//	while (ex1[i] != 0) // 'While' loop to populate character array 'ex1[]'.
//	{

//		b = ex1[i]; // Assigning character 'b' the character array 'ex1[i]'.
//		putchar(tolower(b)); // Using function (tolower) to convert character array to lowercase.
//		i++; // Incrementing 'i'.
//		
//	}

//	cout << ex1[i]; // Display to user character array 'ex1[]'.
//	cout << "\n \n";
//
//	

//}

//void StringAssignment::stringToupper()
//{
//	cout << "Convert lowercase string into a uppercase string... \n";
//	cout << "\n \n";
//	char display;
//	char ex1[266]; // Setting character array 'ex1[]' with the size of '66'.
//	for (int i = 0; i < 266; i++)
//	{
//		ex1[i] = a.apples[i];
//	}
//	
//	for (int x = 0; x < a.stringLength; ++x)
//	{
//		if ((char)a.apples[x] > 64 && (char)a.apples[x] < 91)
//		{
//			a.apples[x] = a.apples[x] + 32;
//			display = a.apples[x];
//		}
//		
//	}

//	 // Display to user character array 'ex1[i]'.
//	cout << "\n \n";
//

//	
//}



//void StringAssignment::stringInput()
//{
//	char Test1[266];
//	char Test2[266];
//	cin >> Test1;
//	cin >> Test2;

//	for (int i = 0; i < 266; i++)
//	{
//		a.apples[i] = Test1[i];
//		a.pears[i] = Test2[i];

//	}
//		
//	
//	
//}













