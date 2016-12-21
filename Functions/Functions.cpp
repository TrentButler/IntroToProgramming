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

		case 'q':
		{
			run = false;
			return 1;
		}



		}




	}




	return 1;
} 