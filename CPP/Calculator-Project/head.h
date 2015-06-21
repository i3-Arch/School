#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

void addMe()
{
	double num1  = 0.0;
	double num2  = 0.0;
	double mySum = 0.0;

	cout << "\n Enter 2 Numbers to ADD \n"
	     << "\n Number 1: ";
	cin >> num1;

	cout << "\n Number 2: ";
	cin >> num2;

	mySum = num1 + num2;

	cout << fixed << setprecision(2)
	     << "\nThe sum of (" << num1 << ") + (" << num2 << ") is " << mySum
	     << endl << endl
	     << num1 << " + " << num2
	     << " = " << mySum << endl;
}

void multiMe()
{
	double num1      = 0.0;
	double num2      = 0.0;
	double myProduct = 0.0;
	
	cout << "\n Enter 2 Numbers to Multiply \n"
	     << "\n Number 1: ";
	cin >> num1;
	
	cout << "\n Number 2: ";
	cin >> num2;

	myProduct = num1 * num2;

	cout << "\n The Product of " << num1 << " and " << num2
	     << " is " << myProduct << endl << endl
	     << num1 << " x " << num2 << " = " << myProduct << endl;
	    
}
