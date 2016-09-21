#include <windows.h>
#include <iostream>
#include "String Class Header.h"
using namespace std;



StringAssignment a = StringAssignment();
StringAssignment::StringAssignment(char *test)
	{
		test = apples;
	}


			
		
		int StringAssignment::stringSize()
	{
			
			cout << "Output to the user a string's length, returning an integer... \n";
			cout << "\n \n";
			char lengthArray[66]; // Declaring array with size of '66'.

			for (int i = 0; i < 66; i++) // For loop to iterate through each array.
			{
				lengthArray[i] = a.apples[i]; // Populating character array 'lengthArray[]' with character array 'a'.
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
		
		bool StringAssignment::stringCompare()
		{
			cout << "Compare two character arrays... \n";
			cout << "Display the string that is lexicographically first... \n";
			cout << "\n \n";
			
			char ex1[66]; // Setting character array 'ex1[]' with the size of '66'.
			char ex2[66]; // Setting character array 'ex2' with the size of '66'.
			
			
			for (int i = 0; i < 66; i++) // 'for' loop to iterate through each array.
			{
				ex1[i] = a.pears[i]; // Populating array 'ex1[]' with array 'a[]'.
				ex2[i] = a.apples[i]; // Population array 'ex2[]' with array 'b[]'.
			}
								
			bool running = true; // 'bool' statement for while loop.
			int i = 0; // Initlizing 'i' to '0'.
			strcmp(ex1, ex2); // Using function 'strcmp' to compare arrays 'ex1' and 'ex2'.
			while (true) // 'While' loop to compare arrays 'ex1[]' and 'ex2[]'.
			{
				if (ex2[i] == 0 && ex1[i] == 0) // 'If' statement comparing both arrays, (if ex1 and ex2 are equal).
				{
					cout << "The strings are identical... \n";
					return 0;

					break;
				}

				if (ex2[i] > ex1[i]) // 'If' statement comparing both arrays, (if ex2 is greater than ex1).
				{
					cout << "String " << ex1 << " is first... \n";
					return 1;

					break;

				}

				if (ex2[i] < ex1[i]) // 'If' statement comparing both arrays, (if ex2 is less than ex1)
				{
					cout <<"String "<< ex2<<" is first... \n";
					return -1;

					break;
				}

				else // 'Else' statement if other if statements are incorrect ('i' increments).
				{
					i++;
				}


			}


		}
				
		char StringAssignment::findCharacter(int a)
		{
			
			cout << "Find a specific character from a character array... \n";
			cout << "\n \n";
						
			char findCharacter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Setting character array 'findCharacter[]' with the string 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'.
			int i = 0; // Initlizing 'i' to '0'.
			findCharacter[i]; // Setting character array 'findCharacter[]' to 'i'.
			while (findCharacter[i] != 0) // 'While' loop to populate character array 'findCharacter[]'.
			{
				i++; // Incrementing 'i' until null character is reached (0) or (\0).
				
			}
			
			cout <<"The character found was "<< findCharacter[a];
			
			return findCharacter[a]; // Returning character from character array 'findCharacter[]'. 
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

			strcat_s(ex1, ex2); // Using function 'strcat' to append character array 'ex2[]' to character array 'ex1[]'.
			cout << ex1; // Display to user character array 'ex1[]' with added character array 'ex2'.
			cout << "\n \n";
			cout << "Press 'q' to exit... \n";

		}

		void StringAssignment::stringPrepend(char *a, char *b)
		{
			char ex1[66]; // Setting character array 'ex1' with size of '66'.
			char ex2[66]; // Setting character array 'ex2' with size of '66'.

			for (int i = 0; i < 66; i++) // 'for' loop to iterate through each array.
			{
				ex1[i] = a[i]; // Populating character array 'ex1[]' with character array 'a[]'.
				ex2[i] = b[i]; // Populating character array 'ex2[]' with character array 'b[]'.
			}


			strcat_s(ex2, ex1); // Using function 'strcat' to prepend character array 'ex1[]' to character array 'ex2[]'.

			cout << ex2; // Display to user character array 'ex2[]' with added character array 'ex1'.
			cout << "\n \n";
			cout << "Press 'q' to exit... \n";

			

		}

		void StringAssignment::stringTolower(char *a)
		{
			cout << "Convert uppercase string to lowercase string... \n";
			cout << "\n \n";
			char ex1[66]; // Setting character array 'ex1[]' with the size of '66'.

			for (int i = 0; i < 66; i++) // 'For' loop to iterate through character arrays.
			{
				ex1[i] = a[i]; // Populating character array 'ex1[]' with character array 'a[]'.
			}
			
			
		
			char b; // Initlizing character 'b'.
			int i = 0; // Initlizing integer 'i' to '0'.
			
			while (ex1[i] != 0) // 'While' loop to populate character array 'ex1[]'.
			{

				b = ex1[i]; // Assigning character 'b' the character array 'ex1[i]'.
				putchar(tolower(b)); // Using function (tolower) to convert character array to lowercase.
				i++; // Incrementing 'i'.
				
			}

			cout << ex1[i]; // Display to user character array 'ex1[]'.
			cout << "\n \n";
			cout << "Press 'q' to exit... \n";
			

		}

		void StringAssignment::stringToupper(char *a)
		{
			cout << "Convert lowercase string into a uppercase string... \n";
			cout << "\n \n";
			
			char ex1[66]; // Setting character array 'ex1[]' with the size of '66'.

			for (int i = 0; i < 66; i++) // 'For' loop to iterate through the arrray.
			{
				ex1[i] = a[i]; // Populating character array 'ex1' with character array 'a[]'.
			}
			
			int i = 0; // Initlizing integer 'i' to '0'.
			char b; // Initlizing character 'b'.
			
			while (ex1[i] != 0) // 'While' loop to iterate through the arrays
			{
				b = ex1[i]; // Assigning character 'b' the character array 'ex1[i]'.
				putchar(toupper(b)); // Using function (toupper) to convert character array 'b' to upperchase.
				i++; // Incrementing integer 'i'.

			}

			cout << ex1[i]; // Display to user character array 'ex1[i]'.
			cout << "\n \n";
			cout << "Press 'q' to exit... \n";

			
		}







	





