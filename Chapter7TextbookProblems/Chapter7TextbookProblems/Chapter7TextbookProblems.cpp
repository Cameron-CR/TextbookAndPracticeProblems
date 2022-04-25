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

		const int NUM_FISH = 20;
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

	


}
		