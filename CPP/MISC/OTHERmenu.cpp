#include <iostream>
using namespace std;

// we return whether the menu was processed correctly
bool processMenu() {
	// show the user the menu
	cout << "Main Menu" << endl;
	cout << "Select your favorite food" << endl;
	cout << "1. Cheese Burger" << endl;
	cout << "2. Ramen" << endl;
	cout << "3. Mashed Potatos" << endl;

	// get the response
	char choice;
	cin >> choice;
	
	// process the response
	// do something for each valid option
	if (choice=='1') {
		cout << "Hold the pickle, hold the lettuce." << endl;
	} else if (choice=='2') {
		cout << "Yum, with extra naruto." << endl;
	} else if (choice=='3') {
		cout << "Don't forget the gravy." << endl;
	} else {
		// if we got this far, the response was not valid
		return false;
	}
	return true;
}

int main () {
	// we loop until the menu is processed
	while (!processMenu()) {
		// if we get here, the menu was not processed correctly
		// so we bother them some more
		cout << "Sorry, that is not a valid choice." << endl;
		cout << "Please try again." << endl << endl << endl;
	}
	cout << endl << "Thank you for playing." << endl;
	return 0;
}


