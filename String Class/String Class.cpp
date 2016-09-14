#include <windows.h>
#include <iostream>
#include "String Class Header.h"
using namespace std;




	StringAssignment::StringAssignment() {}
	
		StringAssignment::StringAssignment(char* a)
		{
			Apples = a;
		}
	


		int StringAssignment::stringSize()
		{
			cout << "Output to the user a string's length, returning an integer... \n";
			cout << "\n \n";

			int z = 0;
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


			cout << lengthArray << " has " << strlen(lengthArray) << " characters in it... \n"; // Output to user string length.
			z++;
			return 0;

		}


		bool StringAssignment::stringCompare(StringAssignment *string)
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


		}

		// RETURN TO THIS LATER!!!!
		char StringAssignment::findCharacter(int index)
		{

			return 0;
		}   

		void StringAssignment::stringAppend(StringAssignment add, bool append)
		{

			char ex1[14] = { "Apples" };
			char ex2[] = { "Pears" };

			strcat_s(ex1, ex2);
			cout << ex1;
		}

		void StringAssignment::stringPrepend(StringAssignment add, bool prepend)
		{
			char ex1[] = { "Apples" };
			char ex2[20] = { "Pears" };


			strcat_s(ex2, ex1);

			cout << ex2;

			

		}





	





