#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int numberRegistered = 0;
	double amountOwed = 0.0;

	cout << "Enter Number Company Registered" << endl;
	cout << "Number Registered: ";
	cin >> numberRegistered;

	if(numberRegistered > 0)   
	{
		if(numberRegistered > 0 && numberRegistered <= 4)
			amountOwed = numberRegistered * 100;
	
		else if(numberRegistered > 4 && numberRegistered <= 10)
			amountOwed = numberRegistered * 80;

		else if(numberRegistered >= 11)
			amountOwed = numberRegistered * 60;

		cout << fixed << setprecision(2);
		cout << "Total Amount Owed: $" << amountOwed << endl;
	}

	else
		cout << "Invalid Amount Registered" << endl;

	return 0;
}