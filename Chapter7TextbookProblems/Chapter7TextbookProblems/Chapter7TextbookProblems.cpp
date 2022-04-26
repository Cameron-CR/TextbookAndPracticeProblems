// Chapter7TextbookProblems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
fstream indata;
int main()
{
	 //7.1 Question
	int empNums[100];
	float payRates[25];
	long miles[14];
	string cityName[26];
	double lightYears[1000];

	//7.2 Fixing the code that was broken 
	
		//int reading[-1];
		int reading[1]; // array definitions cant be negative
	
		//	float measurements[4.5]
		float measurements[5]; //array definitions must be whole numbers. 

		// int size;
		//string names[size]; 

		const int size = 8;
		string names[size]; // the integer must be constant [ I DID NOT KNOW THAT ]/




	// 7.3 

		double question4[4];
		 
	//7.4 What is the difference between an array's size declarator and a subscript. 

		//an array's size declarator is used to first make the array, and defintes how many elemetns will be in it
		// a subscript is the location of the element in an array 

	//7.5 What is array's bound checking? Does C++ perform it? 

		//array bounds checking is a feature of some programming langauges to make sure that when accessing an 
		// array, the programmer is not using locations that are not actually valid in the array. 
		//C++ does NOT perform arrays bound checking. 



	// 7.6 what is the output of the following code. 
		/*
		
			int values[5], count; 
			for (count = 0; count < 5; count++) 
			values[count] = count + 1; 
			for (count = 0; count < 5; count++) 
				 cout << values[count] << endl; 
		
				guessing - 1,2,3,4
				right answer - 1 2 3 4 5
				
				the program writes the human arithemtic, starting at 1, instead of computer arithemtic of starting
				at 0.
		
		*/


		int values[5], count;
		for (count = 0; count < 5; count++)
		{
			values[count] = count + 1;
		}
		for (count = 0; count < 5; count++)
		{
			cout << values[count] << endl;
		}




		//7.7 
			/*
			The following program skeleton contains a 20-element array of int s called fish. 
			When completed, the program should ask how many fish were caught by fishermen 1 
			through 20, and store this data in the array. Complete the program. 


					#include <iostream> 
				using namespace std; 
					int main() 
				{ 
					const int NUM_FISH = 20; 
					int fish[NUM_FISH]; 
				// You must finish this program. It should ask how 
				// many fish were caught by fishermen 1-20, and 
				// store this data in the array fish. 
				return 0; 
					} 
			*/

	/*	const int NUM_FISH = 20;
		int fish[NUM_FISH];
		int userInput; 

		for (int i = 0; i < NUM_FISH; i++)
		{
			cout << "How many fish did you catch?" << "\n";
			cin >> userInput;
			
			fish[i] = userInput;

			cout << "Fisherman #" << i+1 << " caught " << fish[i] << " fish!" << "\n";


		}


		return 0;

	*/



		// 7.8 Define the following arrays:
		/*
	A) ages, a 10-element array of ints initialized with the values 5, 7, 9, 14, 15, 
		17, 18, 19, 21, and 23. 
	B) temps, a 7-element array of floats initialized with the values 14.7, 16.3, 
		18.43, 21.09, 17.9, 18.76, and 26.7. 
	C) alpha, an 8-element array of chars initialized with the values ‘J’, ‘B’, ‘L’, 
		‘A’, ‘*’, ‘$’, ‘H’, and ‘M’. 
		*/

		int ages[10] = { 5,7,8,14,15,17,18,19,21,23 };

		float temps[7] = { 14.7, 16.3, 18.43, 21.09, 17.9, 18.76, 26.7 };

		char alpha[8] = { 'J','B','L', 'A', '*', '$', 'H', 'M'};




		/*	7.9 Is each of the following a valid or invalid array definition? (If a definition is 
	invalid, explain why.) 
	
	1 int numbers[10] = {0, 0, 1, 0, 0, 1, 0, 0, 1, 1}; 
	2 int matrix[5] = {1, 2, 3, 4, 5, 6, 7}; 
	3 double radii[10] = {3.2, 4.7}; 
	4 int table[7] = {2, , , 27, , 45, 39}; 
	5 char codes[] = {'A', 'X', '1', '2', 's'}; 
	6 int blanks[]; 
		
		

		1 int numbers is a valid array definition

		2 int matrix[5] is not a valid array definition because it has more elements than listed in the size declaration.

		3 double radii is valid

		4 int table[7] is not a valid array definition because any empty elements should be initialized to 0, not left blank.

		5 Valid due to implicit array sizing.

		6 not valid, must be initialized to a value or have a size declarator. 

		*/




		/*		7.10 Given the following array definition: 
int values[] = {2, 6, 10, 14}; 
 What does each of the following display? 
A) cout << values[2];
B) cout << ++values[0];
C) cout << values[1]++;
D) x = 2;
cout << values[++x];
		


		A will display 10
		B will display 3 
		C will display
		D will display 14
		
		*/



		/*
`		7.11		Given the following array definition: 
int nums[5] = {1, 2, 3}; 
 What will the following statement display? 
cout << nums[3];




		it will display 0, as 3 is not an initialized element of the array. Default is 0












	7.12		What is the output of the following code? (You may need to use a calculator.)
double balance[5] = {100.0, 250.0, 325.0, 500.0, 1100.0};
const double INTRATE = 0.1;
cout << fixed << showpoint << setprecision(2);
for (int count = 0; count < 5; count++)
 cout << (balance[count] * INTRATE) << endl;


			it will output:
			10
			25
			32.5
			50
			110












			7.13 What is the output of the following code? (You may need to use a calculator.)
const int SIZE = 5;
int time[SIZE] = {1, 2, 3, 4, 5},
 speed[SIZE] = {18, 4, 27, 52, 100},
 dist[SIZE];
for (int count = 0; count < SIZE; count++)
 dist[count] = time[count] * speed[count];
for (int count = 0; count < SIZE; count++)
 {
 cout << time[count] << " ";
 cout << speed[count] << " ";
 cout << dist[count] << endl;
 }


			the output is 
			1 18 18
			2 4  8
			3 27 81
			4 52 208
			5 100 500



		*/

}
		