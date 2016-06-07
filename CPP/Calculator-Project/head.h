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
	
	cout << fixed << setprecision(2)
	     << "\n The Product of " << num1 << " and " << num2
	     << " is " << myProduct << endl << endl
	     << num1 << " x " << num2 << " = " << myProduct << endl;
	    
}

void subMe()
{
	double num1		= 0.0;
	double num2		= 0.0;
	double myDiff	= 0.0;

	cout << "\n Enter 2 Numbers to subtract \n"
		 << "\n Number 1: ";
		 cin >> num1;
	
	cout << "\n Number 2: ";
		 cin >> num2;

		myDiff = num1 - num2;

	cout << fixed << setprecision(2)
		 << "\n The Difference of " << num1 << " and " << num2
		 << " is " << myDiff << endl << endl
		 << num1 << " - " << num2 << " = " << myDiff << endl;
}

void slopeMe()
{

	double myX1		= 0.0;
	double myY1		= 0.0;
	double myX2		= 0.0;
	double myY2		= 0.0;
	double mySlope  = 0.0;

	
	cout << "\n Enter first X coordinate \n"
		 << "\n X1: ";
		 cin >> myX1;

	cout << "\n Enter first Y coordinate \n"
		 << "\n Y1: ";
		 cin >> myY1;
	
	cout << "\n Enter second X coordinate \n"
		 << "\n X2: ";
		 cin >> myX2;
	
	cout << "\n Enter second Y coordinate \n"
		 << "\n Y2: ";
		 cin >> myY2;
	
	
	mySlope = (myY1 - myY2)/(myX1 - myX2);

	cout << fixed << setprecision(2)
		 << "\n The Slope of (" << myX1 << "," << myY1 << ")" << " and (" << myX2 << "," << myY2 << ")" << endl
		 << " is " << mySlope << "\n\n\n" << endl;
}
