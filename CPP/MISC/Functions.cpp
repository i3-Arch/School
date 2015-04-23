/*
 *  Author: i3-Arch
 *  Date: 4/23/15
 *
 *  I made this to practice my functions
 */

#include <iostream>
using namespace std;

// Prototypes
void checkAge(int);
void clearScreen();
char getGender();
char favColor();
int findTheArea();


int main()
{
	int myAge  = 0;
	char myGen = ' ';
	char myCol = ' ';



	cout << "\n\n Enter Your Age: ";
	cin >> myAge;

	checkAge(myAge); // Pass myAge value to Void Function
	
	clearScreen();
	cout << "\n\n The Area of Your Item is: " << findTheArea() << " ft.\n" << endl;
	clearScreen();
	
	myGen = getGender();

	if(myGen == 'm' || myGen == 'M')
        	cout << "\n\n So you are a bro... That R Obvious bro \n" << endl;
        else
          	cout << "\n\n LIES, THERE ARE NO FEMALES ON THE INTERNET !\n\n" << endl;
	
	myCol = toupper(favColor());
	
	if(myCol == 'R')
		cout << "\n\n Ehh, red is ok...\n" << endl;
	else if(myCol == 'G')
		cout << "\n\n GREEEEEEEEEEEEEEN \n" << endl;
	else if(myCol == 'B')
		cout << "\n\n That is my favorite too !\n" << endl;
	else if(myCol == 'W')
		cout << "\n\n Ehh...... ok... #racist\n" << endl;
        else if(myCol == 'Y')
                cout << "\n\n Are You A Female??? \n" << endl;
	else if(myCol == 'P')
		cout << "\n\n Why would you choose that ?!?!? ROTI 16 ! \n" << endl;
	else // This will never run due to loop preventing it from returning any other value.... ( line 127 )
		cout << "\n\n Well... Congrats.. You've managed to fuck this up too lol..... \n" << endl;


	
	return 0;
}

void clearScreen()
{
	cout << "\n\n\n\n\n\n\n\n\n"
	     << "\n\n\n\n\n\n\n\n\n"
	     << "\n\n\n\n\n\n\n\n\n" << endl;
}

void checkAge(int myAge)
{
	if(myAge <= 11)
		cout << "\n Lame....\n" << endl;
	else if(myAge == 12)
		cout << "\n Swag.. Me too Bro\n" << endl;
	else if(myAge >= 9001)
		cout << "\n ITS OVAR 9000 ! \n" << endl;
	else
		cout << "\n Whatever bro... \n" << endl;
}

int findTheArea()
{
	int myLength = 0;
	int myWidth  = 0;
	int myArea   = 0;
	

	cout << "\n====================\n"
	     << "| Find Area in Feet |\n"
	     << "====================\n"
	     << "\n Enter the Length: ";
	cin >> myLength;

	cout << "\n Enter the Width: ";
	cin >> myWidth;

	myArea = myLength * myWidth;

	return myArea;
}

char getGender()
{
	char myGender = ' ';

	do
	{
		cout << "\n\n =[ Enter Your Gender Type ]=\n\n"
		     << "\n ** Valid Option are 'M' or 'F' **\n"
		     << " Choose [M]ale or [Female] \n" << endl;
		cout << "\n\n Gender: ";
		cin >> myGender;

	}while(myGender != 'm' && myGender != 'M' && myGender != 'f' && myGender != 'F');


	return myGender;
}

char favColor()
{
	char myColor = ' ';

	do
	{
		cout << "\n\n ===[ Enter Your Favorite Color ]===\n\n"
	     	     << " [R]ed\n [W]hite\n [B]lue\n [G]reen\n [P]ink\n [Y]ellow\n"
		     << "\n\n [Choice]: ";
		cin >> myColor;
		myColor = toupper(myColor);
	}while(myColor != 'R' && myColor != 'W' && myColor != 'B' && myColor != 'G' && myColor != 'P' && myColor != 'Y');

	return myColor;
}
