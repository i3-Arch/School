/***********************
***   Intro to C++   ***
***********************/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function Prototype
int getRandomNumber(int lower, int upper);


int main()
{
	// Declare Variables
	int smallest      = 0;
	int largest	  = 0;
	int num1	  = 0;
	int num2	  = 0;
	int correctAnswer = 0;
	int userAnswer    = 0;



	// Initialize Rand Function
	srand(static_cast<int>(time(0)));

	cout << "\n\n Smallest Integer: ";
	cin >> smallest;
	cout << "\n\n Largest Integer: ";
	cin >> largest;
	cout << endl;

	for(int x = 1; x < 6; x += 1)
	{
		/*
 		* Generate Two Random Integers
		* From Smallest to Largest
		* Then Calculate The Sum
		*/

		num1 = getRandomNumber(smallest, largest);
		num2 = getRandomNumber(smallest, largest);
		correctAnswer = num1 + num2;
		

		// Display Addition Problem and Get User's Answer
		cout << "\n\n What is the sum of " << num1 << " + " << num2 << " ?" << endl;
		cout << "\n Your Answer: ";
		cin >> userAnswer;
		
		// Determine Whether User's Answer is Correct
		if(userAnswer == correctAnswer)
			cout << "\n\n Correct!\n " << endl;
		else
			cout << "\n\n Sorry, The Correct Answer is: " << correctAnswer << endl << endl;
	}

	return 0;

}

/********* FUNCTION DEFINITIONS ***********/

int getRandomNumber(int lower, int upper)
{
	int randInteger = 0;
	
	// Generate Random Integer  - Lower through Upper
	randInteger = lower + rand() % (upper - lower + 1);

	return randInteger;
}

