# include <iostream>
# include <windows.h>
using namespace std;
int main()
{
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


system("pause");





//EXERCISE 7


int days[29][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29 };
for (int i = 0; i < 29; i++)
{
	cout << endl;
	for (int j = 0; j < 5; j++)
		cout << days[i][j];
}






}