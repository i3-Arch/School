/* HEADER FILE FOR FINAL.cpp 
 *
 *   Testing my first header file...
 *
 * */

#include <iostream>

using std::cout;
using std::endl;
using std::cin;




// FUNCTION PROTOTYPES
void getInput(double&, double&, double&);
void displayInfo(char, double);
char calcAvg(double, double, double, double&);



// PROGRAM-DEFINED FUNCTIONS
void getInput(double &labAvg, double &quizAvg, double &examAvg)
{
	cout << "\n Enter your Lab Avg: ";
 	cin >> labAvg;

	cout << "\n Enter your Quiz Avg: ";
	cin >> quizAvg;

	cout << "\n Enter your Exam Avg: ";
	cin >> examAvg;
}

char calcAvg(double labAvg, double quizAvg, double examAvg, double &myCalc)
{
        char myGrade = ' ';
        myCalc = labAvg * .40 + quizAvg * .20 + examAvg * .40;


        if(myCalc > 92)
                myGrade = 'A';
        else if(myCalc > 84.9 && myCalc < 93)
                myGrade = 'B';
        else if(myCalc > 76.9 && myCalc < 85)
                myGrade = 'C';
        else if(myCalc > 69.9 && myCalc < 77)
                myGrade = 'D';
        else
                myGrade = 'F';

        return myGrade;
}

void displayInfo(char myGrade, double finAvg)
{
        cout << "\n\n Your Final Average is: " << finAvg << endl;
        cout << "\n\n Your Final Grade Average is: " << myGrade << endl;
}
