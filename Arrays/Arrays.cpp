# include <iostream>
# include <windows.h>
using namespace std;
int main()
{
	int display = 0;
	int display1 = 0;
	
	
	/*
	std::cout << "Example of a Array \n";
	system("pause");


	int i = 0;
	int num[10]={ 50,51,52,53,54,55,56,57,58,59 };

	for (i = 50; i <= 60; i++)
	{

	std::cout << "\n" << num[10];
	}
	std::cout<<"\n";
	system("pause");
	*/


	//EXERCISE 1
	/*
	std::cout << "Determine if the array is valid or invalid. \n";
	std::cout << "\n";
	std::cout << "int numbers[10] = {0,0,1,0,0,1,0,0,1,1}; \n";
	std::cout << "-This array is valid. \n";
	std::cout << "\n";
	std::cout << "int matrix[5] = {1,2,3,4,5,6,7} \n";
	std::cout << "-This array is invalid \n";
	std::cout << "- Array's ammount is assigned '5' but is given more than 5 values. \n";
	std::cout << "\n";
	std::cout << "double radii[10] = (3.2, 4.7} \n";
	std::cout << "This array is invalid. \n";
	std::cout << "- Cannot contain a '(', it must be a scope operator. \n";
	std::cout << "\n";
	std::cout << "int table[7] = {2, , , 7, , 45, 39} \n";
	std::cout << "- This array is invalid. \n";
	std::cout << "- When using ',' a value must be placed. \n";
	std::cout << "\n";
	std::cout << "char codes[] = { 'A', 'X', '1', '2', 's'} \n";
	std::cout << "- This array is valid. \n";
	std::cout << "\n";
	std::cout << "int blanks[]; \n";
	std::cout << "- This array is valid. \n";
	std::cout << "\n";
	std::cout << "int collection[-20]; \n";
	std::cout << "- This array is invalid. \n";
	std::cout << "- Cannot have a negative ammont as ammount for array. \n";
	std::cout << "\n";
	std::cout << "int hours[3] = 8, 12, 16; \n";
	std::cout << "- This array is invalid. \n";
	std::cout << "- Must use scope operator. \n";
	system("pause");
	*/

	//EXERCISE 2
	/*

	std::cout << "\n";
	std::cout << "2. Given the following array definition: \n";
	std::cout << "int values[] = {2,6,10,14}";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "What does each of the following display? \n";
	std::cout << "\n";
	cout << "a) cout << values[2] \n";
	cout << "b) cout<< ++values[0]; \n";
	cout << "c) cout << values[1]++; \n";
	cout << "d) x=2;   cout << values[++x]; \n";
	cout << "e) cout << values[4]; \n";
	std::cout << "\n";
	std::cout << "\n";
	cout << "a). 10 \n";
	cout << "b). 3 \n";
	cout << "c). 6 \n";
	cout << "d). 14 \n";
	cout << "e). -858993460 \n";
	std::cout << "\n";
	system("pause");
	*/

	//EXERCISE 3
	/*
	cout << "3. Write a for loop for (int data[10]) \n";
	cout << "\n";
	int a = 0;
	int data[10]{ 10,9,8,7,6,5,4,3,2,1 };
	for (a = 0; a < 10; a++)
	{
	cout << "\n" << data[a];

	}
	cout << "\n";
	cout << "\n";
	system("pause");
	*/

	//EXERCISE 4
	/*
	cout << "Create a program that asks for 5 numbers, display numbers in reverse order. \n";


	int c = 0;
	int b[5];
	std::cin >> b[0];
	std::cin >> b[1];
	std::cin >> b[2];
	std::cin >> b[3];
	std::cin >> b[4];
	for (c = 4; c >= 0; c--)
	{
	std::cout <<"\n" << b[c];

	}



	cout << "\n";
	cout << "\n";
	system("pause");
	*/

	//EXERCISE 5
/*
cout << "This program will display the largest number entered. \n";
cout << "Please enter 10 numbers. \n";
int e[10];

	int d;	
	
	cin >> e[0];
	cin >> e[1];
	cin >> e[2];
	cin >> e[3];
	cin >> e[4];
	cin >> e[5];
	cin >> e[6];
	cin >> e[7];
	cin >> e[8];
	cin >> e[9];
	int largeNumber = e[0];
	int smallNumber = e[0];
	for (d = 0; d < 10; d++)
	
	{
		
		if (largeNumber < e[d])
			largeNumber = e[d];

		if (smallNumber > e[d])
			smallNumber = e[d];
					
	}

	cout <<"The largest number entered is "<< largeNumber << "\n" <<"The smallest number entered is "<< smallNumber;
	cout << "\n";
	system("pause");

		return 0;
		*/

//EXERCISE 6

//6. Create a program that creates a 3x3 array of integers. 
// - Output the numbers in a grid format.

/*
cout << "6. Create a program that creates a 3x3 array of integers. \n";
cout << "- Output the numbers in a grid format. \n";

int f[3][3] = { // Declaring array f[3][3] size
	{1,2,3},
	{4,5,6},
	{7,8,9}
	
};

for (int i = 0; i < 3; i++) // for loop used for array rows 
{
	cout << endl;
	for (int j = 0; j < 3; j++) // for loop used for array columns
	{
		cout << f[i][j]; // print to system arrays
	}
}

cout << "\n";
cout << "\n";
system("pause");


*/


//EXERCISE 7

// 7. An application uses a two dimensional array defined as follows:
// int days[29][5];
// Write code that sums each row in the array and displays the results.
// Write code that sums each column in the array and displays the results.

/*

cout << "7. Application uses a two dimensional array is defined as follows: \n";
cout << "\n";
cout << "int days[29][5]; \n";
cout << "\n";
cout << "Write code that sums each row and column and displays the results. \n";

cout << "\n";
int days[29][5]; // Array named "days" has 29 rows and 5 columns. 
for (int i = 0; i < 29; i++) // Declaring my loop for the 29 rows.
{
	display += i; // Adding all numbers in the 29 rows, assigning the sum to "display".
	for (int j = 0; j < 5; j++) // Declaring my loop for the 5 columns.
		display1 += j; // Adding all numbers in the 5 columns, assigning the sum to "display1".
}

cout <<"The sum of each row in the array is: "<< display;
cout << "\n";
cout << "The sum of each column in the array is: "<< display1;
cout << "\n";
system("pause");

*/


//EXERCISE 8

/*
8. Create a program that declares an array of 5 integer values. These values will represent the
health of 5 characters. Initialise the values all to 100. Your program is to ask the user to
enter a number (0 to 4) to select a character that is to be attacked by a monster. Each attack
deals 40 damage per attack. If a player’s health gets below 0 then should not be able to be
attacked. Your program should simulate 5 attacks. After the attacks have finished, output
the parties’ remaining health to the console.
*/


/*
8. Create a program that declares an array of 5 integer values. These values will represent the
health of 5 characters. Initialise the values all to 100. Your program is to ask the user to
enter a number (0 to 4) to select a character that is to be attacked by a monster. Each attack
deals 40 damage per attack. If a player’s health gets below 0 then should not be able to be
attacked. Your program should simulate 5 attacks. After the attacks have finished, output
the parties’ remaining health to the console.

*/

int attack;
int charA;
int charB;
int charC;
int charD;
int charE;
int test = 0;








	int charHealth[5] = { 100,100,100,100,100 };
	charA = charHealth[0];
	charB = charHealth[1];
	charC = charHealth[2];
	charD = charHealth[3];
	charE = charHealth[4];



	while (test < 5)
	{
		test++;
		cin >> attack;


		if (attack == 0)
			charA -= 40;

		else if (attack == 1)
			charB -= 40;

		else if (attack == 2)
			charC -= 40;

		else if (attack == 3)
			charD -= 40;

		else if (attack == 4)
			charE -= 40;

		 if (charA == 0)
			cout << "Cannot attack player A anymore. \n";
	

		if (charB == 0)
			cout << "Cannot attack player B anymore. \n";
		

		 if (charC == 0)
			cout << "Cannot attack player C anymore. \n";
			

		 if (charD == 0)
			cout << "Cannot attack player D anymore. \n";
			

		 if (charE == 0)
			cout << "Cannot attack player E anymore. \n";
			
			

		


	}


	cout << charA << charB << charC << charD << charE;
	cout << "\n";

	system("pause");









}