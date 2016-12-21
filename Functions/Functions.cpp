#include "Functions.h"

int main()
{
	system("color 0a");
	bool run = true;
	char iNput = ' ';

	//INTEGER VALUE FOR 'SUMTO' FUNCTION
	int sumTo = 6;

	//INTEGER ARRAY FOR 'SUMARRAY' FUNCTION
	int mArray[] = { 1,2,3,4,5,6,7,8 };

	//INTEGER ARRAY FOR 'MINARRAY' FUNCTION
	int mArray2[] = { 2,4,6,8,1,6,2 };

	//INTEGER ARRAY(S) FOR 'MULT BY INDEX'
	int inputArray[] = { 10, 15, 7, 4, 13, 19, 8 };
	int outputArray[7];

	//INTEGER ARRAY(S) FOR EXERCISE 11
	int	inputArr1[] = { 1,3,5,7,9,11 };
	int inputArr2[] = { 2,4,6,8,10,12 };
	int outputArr[6];

	//INTEGER ARRAY(S) FOR EXERCISE 12
	int exerArray[] = { 3,2,4,7 };

	//INTEGER ARRAY(S) FOR EXERCISE 13
	int searchArray[] = { 22,14,66,17,2,6 };

	//INTEGER ARRAY(S) FOR EXERCISE 14
	int splitArray1[] = { 12,43,55,-22,234,55,66 };
	int splitArray2[7];
	int splitArray3[7];

	//INTEGER ARRAY(S) FOR EXERCISE 16
	int looksayArray[] = { 1, 2, 2, 2, 3, 4 };
	
	while (run == true)
	{
		system("cls");
		cout << "1.) Exercise 1 \n";
		cout << "2.) Exercise 2 \n";
		cout << "3.) Exercise 3 \n";
		cout << "4.) Exercise 4 \n";
		cout << "5.) Exercise 5 \n";
		cout << "6.) Exercise 6 \n";
		cout << "7.) Exercise 7 \n";
		cout << "8.) Exercise 8 \n";
		cout << "9.) Exercise 9 \n";
		cout << "A.) Exercise 10 \n";
		cout << "B.) Exercise 11 \n";
		cout << "C.) Exercise 12 \n";
		cout << "D.) Exercise 13 \n";
		cout << "E.) Exercise 14 \n";
		cout << "F.) Exercise 15 \n";
		cout << "G.) Exercise 16 \n";
		cout << "H.) Exercise 17 \n";

		cout << "q.) Quit \n";
		cout << "\n \n";

		cin >> iNput;
		switch (iNput)
		{
		case '1':
		{
			exercise1();
			break;
		}

		case '2':
		{
			exercise2();
			break;
		}

		case '3':
		{
			exercise3();
			break;
		}

		case '4':
		{
			exercise4();
			break;
		}

		case '5':
		{
			exercise5();
			break;
		}

		case '6':
		{
			exercise6();
			break;
		}

		case '7':
		{
			exercise7(sumTo);
			break;
		}

		case '8':
		{
			exercise8(mArray, 8);
			break;
		}

		case '9':
		{
			exercise9(mArray2, 7);
			break;
		}

		case 'A':
		{
			exercise10(inputArray, outputArray, 7);
			break;
		}

		case 'B':
		{
			exercise11(inputArr1, inputArr2, outputArr, 6);
			break;
		}

		case 'C':
		{
			exercise12(exerArray, 4);
			break;
		}

		case 'D':
		{
			exercise13(searchArray, 6, 2);
			break;
		}

		case 'E':
		{
			exercise14(splitArray1, splitArray2, splitArray3, 7);
			break;
		}

		case 'F':
		{
			exercise15(2, 4);
			break;

		}

		case 'G':
		{
			exercise16(looksayArray, 6);
			break;
		}

		case 'H':
		{
			exercise17();
			break;
		}

		case 'q':
		{
			run = false;
			return 1;
		}

		}
		
	}
	
	return 1;
} 