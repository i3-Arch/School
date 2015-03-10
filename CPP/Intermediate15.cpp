#include <iostream>
using namespace std;


int main() {

	char myGender   = ' ';
	char myActivity = ' ';
	int  myWeight	= 0;
	int  dailyCals  = 0;
	int	 areWeOk    = 0;

	cout << "\n\n Enter Your Gender" << endl;
	cout << "\n (M)ale   or   (F)emale" << endl;
	cout << "\n\n Gender: ";
	cin >> myGender;
	cout << "\n\n Enter Your Activity Level" << endl;
	cout << "\n (I)nactive  or  (A)ctive" << endl;
	cout << "\n Activity Level: ";
	cin >> myActivity;
	cout << "\n\n Enter Your Weight in Pounds" << endl;
	cout << "\n Weight: ";
	cin >> myWeight;


	if(toupper(myGender) == 'M')
	{
		if(toupper(myActivity) == 'A')
			dailyCals = myWeight * 15;
		
		else if(toupper(myActivity) == 'I')
			dailyCals = myWeight * 13;
		
		else 
			areWeOk = 1;
	}
	
	else if(toupper(myGender) == 'F')
	{
		if(toupper(myActivity) == 'A')
			dailyCals = myWeight * 12;

		else if(toupper(myActivity) == 'I')
			dailyCals = myWeight * 10;

		else
			areWeOk = 1;
	}
	
	else
		areWeOk = 1;
	
	// only ouput Total Daily Calories if everything goes well
	if(areWeOk == 0)
		cout << "\n Total Daily Calories: " << dailyCals << " Calories" << endl;
	
	else
	{
		cout << "\n\n\n **** ERROR ****\n" << endl;
		cout << "\n\n  You Did NOT Enter VALID Data \n\n" << endl;
	}
	return 0;
}
