#include <iostream>
using namespace std;

int main(){	

	
	int    myAge = 0;
	int    myCal = 0;
	double myPay = 0.0;
	char   myGender;
	 
	cout << "##############################################" << endl;	
	cout << "##                                          ##" << endl;
	cout << "##   Are you a Faggot?    Take the test!    ##" << endl;
	cout << "##                                          ##" << endl;
	cout << "##       Power Level = Age x Hourly Pay     ##" << endl;
	cout << "##                                          ##" << endl;
	cout << "##############################################" << endl;


	cout << "\n	How old are you? \n\n";
	cout << "   Age: ";
	cin >> myAge;
	cout << " <==\n\n";

	if (myAge >= 9001 || myAge <= 12) {
		cout << "\n\n  ==> Yeah, And I own 20 purple kangaroo's that rob green elephants for bannanas that were stolen from red camels. <==\n\n";
	}
	else if (myAge >= 30 && myAge <= 50) {
		cout << "\n\n  ==> You must be a oldfag in his prime\n\n";
	}
	else {
		cout << "\n\n  ==> Why you got to lie bro?\n\n";
	}
	
	cout << "\n  Are you Male or Female";
	cout << "\n\n   [M/F] \n\n";
	cout << "\n\n Gender: ";
	cin >> myGender;
	
	if (myGender == 'F' || myGender == 'f') {
	
		cout << "\n\n ==> Quit lying... Rule 16 <==\n\n";
	}
	
	else if (myGender == 'M' || myGender == 'm') {
		cout << "\n\n ==> No Shit... Rule 16 <== \n\n";

	}

	else {
		cout << "\n\n ==> Choices were 'M' or 'F' ... You seem more like a 'i cant read fggt' <==\n\n";
	}
	
	cout << "What is your Hourly Pay?" << endl;
	cout << "\n\n Hourly Pay: ";
	cin >> myPay;
	

	if (myGender == 'F' && myAge >= 9001) {
		cout << "\n\n  Obvious Faggot Here....\n\n" << endl;
		cout << "    ==> You want to be a girl OVAR 9000 <==  \n" << endl;
	}
	
	static_cast <double> (myCal = myAge * myPay);
	
	cout << "\n\n    Your Power Level is: ";
	cout << myCal << " <==" << endl;

	if (myCal >= 9001) {
		cout << "\n\n  POWER LEVEL OVAR 9000 ! \n\n" << endl;
		cout << "\n\n  ==> FAGGOT CONFIRMED <== \n\n" << endl;
	}

	return 0;
}
