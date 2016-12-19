#include "Functions.h"

int main()
{
	system("color 0a");
	bool run = true;
	char iNput = ' ';


	while (run == true)
	{
		system("cls");
		cout << "1.) Exercise 1 \n";
		cout << "2.) Exercise 2 \n";
		cout << "3.) Exercise 3 \n";
		cout << "4.) Exercise 4 \n";
		cout << "5.) Exercise 5 \n";

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

		case 'q':
		{
			run = false;
			return 1;
		}



		}




	}




	return 1;
} 