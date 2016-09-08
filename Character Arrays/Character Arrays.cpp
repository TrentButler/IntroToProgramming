#include "Character Arrays.h"
#include <windows.h>
#include <iostream>







int main()
{
	char input = '0';
	cin >> input;
	while (input != 'q')
	{

		switch (input)
		{
		case '1':
		{
			Exercise1();
			break;
		}

		case '2':
		{
			Exercise2();
			break;
		}

		case 'q':
		{
			system("cls");
			break;
		}
		}


	}
	
	cout << "\n \n";
	system("pause");
	return 0;



}