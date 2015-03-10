#include <iostream>
using namespace std;

int main() {

	char myChoice = ' ';

	cout << " Enter One of the Following Letters" << endl;
	cout << " Choices:     A - Print Hey" << endl;
	cout << " Choices:     B - Print Ohai" << endl;
	cout << " Choices:     C - Print Sup" << endl;
	cout << " Choices:     D - Print SWAG" << endl;
	cout << "\n\n Choice: ";
	cin >> myChoice;


	myChoice = toupper(myChoice);

	switch(myChoice)
	{
	case 'A':
		cout << "Hey" << endl;
		break;
	case 'B':
		cout << "Ohai" << endl;
		break;
	case 'C':
		cout << "Sup" << endl;
		break;
	case 'D':
		cout << "Hey" << endl;
		break;
	default:
		cout << "Hey  || Default Choice is A" << endl;
	}

	return 0;
}