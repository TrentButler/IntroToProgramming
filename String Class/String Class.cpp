#include <windows.h>
#include <iostream>
#include "String Class Header.h"
using namespace std;




	StringAssignment::StringAssignment() {}
	
	StringAssignment::StringAssignment(char* a)
		{
			Apples = a;
		}
	


		int StringAssignment::stringSize(char *a)
	{

	
		
			cout << "Output to the user a string's length, returning an integer... \n";
			cout << "\n \n";
			char lengthArray[66]; // Declaring array with size of '66'.

			for (int i = 0; i < 66; i++) // For loop to iterate through each array.
			{
				lengthArray[i] = a[i]; // Populating character array 'lengthArray[]' with character array 'a'.
			}



			
		
			int i = 0; //Initilizing variable 'i' to 0.
			lengthArray[i]; //Seting array 'lengthArray[]' to 'i'.
			strlen(lengthArray); // Using 'strlen' to count the string's length
			while (lengthArray != 0) // While loop to iterate through 'lengthArray[]' until '0' or null character occurs.
			{

				if (lengthArray[i] == 0) // If statement to end while loop.
				{
					break;
				}
				i++; // incrementing i.


			}


			cout <<"String "<< lengthArray << " has " << strlen(lengthArray) << " characters in it... \n"; // Output to user string's length.
			
			return i; // Returning string's length, or how many times 'i' incremented.

		}


		bool StringAssignment::stringCompare(char *a, char *b)
		{
			cout << "Compare two character arrays... \n";
			cout << "Display the string that is lexicographically first... \n";
			cout << "\n \n";
			
			char What[66];
			char When[66];
			
			
			for (int i = 0; i < 66; i++)
			{
				What[i] = a[i];
				When[i] = b[i];
			}
			
			

			
			
			
			
			
			
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
					cout << "String " << What << " is first... \n";
					return 1;

					break;

				}

				if (When[i] < What[i])
				{
					cout <<"String "<< When<<" is first... \n";
					return -1;

					break;
				}
				else
				{
					i++;
				}


			}


		}

		
		char StringAssignment::findCharacter(int a)
		{
			
			cout << "Find a specific character from a character array... \n";
			cout << "\n \n";

			
			
			char findCharacter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
			int i = 0;
			findCharacter[i];
			while (findCharacter[i] != 0)
			{
				i++;
				
			}
			
			cout <<"The character found was "<< findCharacter[a];
			
			return findCharacter[a];
		}   

		void StringAssignment::stringAppend(char *a, char *b)
		{

			char ex1[66]; // Setting character array 'ex1' with the size of '66'. 
			char ex2[66]; // Setting character array 'ex2' with the size of '66'.

			for (int i = 0; i < 66; i++) // 'for' loop to iterate through each array.
			{
				ex1[i] = a[i]; // Populating character array 'ex1[]' with character array 'a[]'.
				ex2[i] = b[i]; // Populating character array 'ex2[]' with character array 'b[]'.
			}

			strcat_s(ex1, ex2); // 
			cout << ex1;
		}

		void StringAssignment::stringPrepend(StringAssignment add, bool prepend)
		{
			char ex1[] = { "Apples" };
			char ex2[20] = { "Pears" };


			strcat_s(ex2, ex1);

			cout << ex2;

			

		}





	





