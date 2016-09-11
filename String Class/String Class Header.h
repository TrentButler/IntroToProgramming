#pragma once
#include <windows.h>
#include <iostream>
using namespace std;

// The ability to query the string’s length, returning an integer

char stringLen()
{
	
	cout << "Output to the user a string's length, returning an integer... \n";
	cout << "\n \n";
	

	char lengthArray[] = { "Apples" }; // Declaring array with string 'Apples'.
	int i = 0; //Initilizing variable 'i' to 0.
	strlen(lengthArray); // using 'strlen' to count the string 'Apples' length
	while (lengthArray != 0) // while loop to iterate through 'lengthArray[]' until '0' or null character occurs.
	{
		
		if (lengthArray[i] == 0) // If statement to end while loop.
		{
			break;
		}
		i++; // incrementing i.


	}
	
	
	cout << lengthArray << " has " << strlen(lengthArray)<<" characters in it... \n"; // Output to user string length.
	

	

	return 0; 
}



char stringPosition()
{

	return 0;
}

char stringCompare()
{
	char What[] = { "What" };
	char When[] = { "When" };
	
	bool running = true;
	int i = 0;
	strcmp(What, When);
	while (true)
	{
		if (When[i] == 0 && What[i] == 0)
		{
			cout << "The strings are identical... \n";
			return 0;
			
			break;
		}

		if (When[i] > What[i])
		{
			cout << What;
			return 1;
			
			break;

		}

		if (When[i] < What[i])
		{
			cout << When;
			return -1;
			
			break;
		}
		else
		{
			i++;
		}

		
	}

	
	

	


	return 0;

}

char stringCopy()
{
	char ex1[] = { "Apples" };
	char ex2[66] = { "Pears" };

	
	strcpy_s(ex2, ex1);
	int i = 0;
	while (ex1[i] != 0)
	{
		ex2[i] = ex1[i];
		i++;
	}

	ex2[i] = 0;
	cout << ex2;

}

char stringAppend()
{

	char ex1[14] = { "Apples" };
	char ex2[] = { "Pears" };

	strcat_s(ex1, ex2);
/*
	int i = strlen(ex1) + 1;
	int j = 0;

	while (ex2[j] != 0);
	{
		ex1[i] = ex2[j];
		++i;
		++j;

	}
	
	ex1[i] = 0;
	*/
	cout << ex1;
	
	return 0;


}

char stringPrepend()
{
	char ex1[] = { "Apples" };
	char ex2[20] = { "Pears" };


	strcat_s(ex2, ex1);

	cout << ex2;

	return 0;
}

























