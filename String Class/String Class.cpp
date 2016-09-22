#include <windows.h>
#include <iostream>
#include "String Class Header.h"
using namespace std;



		StringAssignment a = StringAssignment();
	
			
		
		int StringAssignment::stringSize()
	{
			
			cout << "\n";
			char lengthArray[266]; // Declaring array with size of '266'.
			
			for (int i = 0; i < 266; i++) // For loop to iterate through each array.
			{
				lengthArray[i] = a.apples[i]; // Populating character array 'lengthArray[]' with character array 'a'.
				
			}
			
			

			int i = 0; //Initilizing variable 'i' to 0.
			
			lengthArray[i]; //Seting array 'lengthArray[]' to 'i'.
			
			
			
			while (lengthArray != 0) // While loop to iterate through 'lengthArray[]' until '0' or null character occurs.
			{

				if (lengthArray[i] == 0) // If statement to end while loop.
				{
					break;
				}
				i++; // incrementing i.
				

			}
			
			cout <<"String "<< lengthArray << " has " << i << " characters in it... \n"; // Output to user string's length.
			
			cout << "\n \n";
			return i; // Returning string's length, or how many times 'i' incremented.
			

		}
		
		bool StringAssignment::stringCompare()
		{
			cout << "\n";
			
			char ex1[66]; // Setting character array 'ex1[]' with the size of '266'.
			char ex2[66]; // Setting character array 'ex2' with the size of '266'.
			
			for (int i = 0; i < 66; i++) // 'for' loop to iterate through each array.
			{
				ex1[i] = a.pears[i]; // Populating array 'ex1[]' with array 'a[]'.
				ex2[i] = a.apples[i]; // Population array 'ex2[]' with array 'b[]'.
			}
								
			bool running = true; // 'bool' statement for while loop.
			int i = 0; // Initlizing 'i' to '0'.
			
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
			cout << "\n \n";


		}
				
		char StringAssignment::findCharacter(int z)
		{
			
									
			char findCharacter[266]; // Setting character array 'findCharacter[]' with the size of 266.
			
			for (int i = 0; i < 266; i++)
			{
				findCharacter[i] = a.apples[i];

			}
			
			cout <<"The character found was "<< findCharacter[z];
			cout << "\n \n";
			
			return findCharacter[z]; // Returning character from character array 'findCharacter[]'. 
		}   

		void StringAssignment::stringAppend()
		{
			
			int orgLength = a.stringLength;
			int z;
			for (z = 0; a.stringLength; ++z)
			{
				a.apples[orgLength + z] = a.apples[z];

			}
			a.pears[orgLength + z] = 0;
			//cout << "APPEND: ";
			for (int i = 0; a.apples[i] != 0; i++)
			{
				a.apples[i];
			}

			cout << a.apples << "\n \n";
		}

		void StringAssignment::stringPrepend(char *a, char *b)
		{
			char ex1[66]; // Setting character array 'ex1' with size of '266'.
			char ex2[66]; // Setting character array 'ex2' with size of '266'.

			for (int i = 0; i < 66; i++) // 'for' loop to iterate through each array.
			{
				ex1[i] = a[i]; // Populating character array 'ex1[]' with character array 'a[]'.
				ex2[i] = b[i]; // Populating character array 'ex2[]' with character array 'b[]'.
			}


			strcat_s(ex2, ex1); // Using function 'strcat' to prepend character array 'ex1[]' to character array 'ex2[]'.

			cout << ex2; // Display to user character array 'ex2[]' with added character array 'ex1'.
			cout << "\n \n";
		

			

		}

		void StringAssignment::stringTolower(char *a)
		{
			cout << "Convert uppercase string to lowercase string... \n";
			cout << "\n \n";
			char ex1[66]; // Setting character array 'ex1[]' with the size of '266'.

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
		
			

		}

		void StringAssignment::stringToupper()
		{
			cout << "Convert lowercase string into a uppercase string... \n";
			cout << "\n \n";
			char display;
			char ex1[266]; // Setting character array 'ex1[]' with the size of '66'.
			for (int i = 0; i < 266; i++)
			{
				ex1[i] = a.apples[i];
			}
			
			for (int x = 0; x < a.stringLength; ++x)
			{
				if ((char)a.apples[x] > 64 && (char)a.apples[x] < 91)
				{
					a.apples[x] = a.apples[x] + 32;
					display = a.apples[x];
				}
				
			}

			 // Display to user character array 'ex1[i]'.
			cout << "\n \n";
		

			
		}



		void StringAssignment::stringInput()
		{
			char Test1[266];
			char Test2[266];
			cin >> Test1;
			cin >> Test2;

			for (int i = 0; i < 266; i++)
			{
				a.apples[i] = Test1[i];
				a.pears[i] = Test2[i];

			}
				
			
			
		}



	



	





