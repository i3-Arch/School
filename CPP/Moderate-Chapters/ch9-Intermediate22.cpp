// Not sure if this is what you wanted?!?!?!
#include <iostream>
#include <iomanip>
using namespace std;

double getGrossPay(double, double);


int main()
{

	int myCount			= 1;
	double perEmployee	= 0.0;
	double hoursWorked	= 0.0;
	double payRate		= 0.0;
	double myGross		= 0.0;


	cout << "\n\n ** Enter 0 to Quit ** \n\n"
	     << "\n Enter Hours Worked : ";
	cin >> hoursWorked;


	while(hoursWorked > 0)
	{
		cout << "\n Pay rate : $";
		cin >> payRate;

		myGross += getGrossPay(hoursWorked, payRate);

		if(hoursWorked > 40)
		{
			double extraHours = 40.00 - hoursWorked;
			double extraPayRate = 1.50 * payRate;
			perEmployee =(40 * payRate) + (extraHours * extraPayRate);
		}
		else
			perEmployee = hoursWorked * payRate;

		cout << fixed << setprecision(2);
		cout << "\n\n\n Gross for Employee #" << myCount << "\n Gross: $" << perEmployee << endl << endl;
		cout << "\n\n ** Enter 0 to Quit ** \n\n"
		     << "\n Enter Hours Worked : ";
		cin >> hoursWorked;
		myCount += 1;
	}

	cout << fixed << setprecision(2);
	cout << "\n\n Total Gross Pay is: $" << myGross << endl;

	return 0;
}

double getGrossPay(double hoursWorked, double payRate)
{
	double grossPay = 0.0;

	if (hoursWorked > 40)
	{
		double extraHours = 40 - hoursWorked;
		double extraPayRate = 1.5 * payRate;
		grossPay = (40 * payRate) + (extraHours * extraPayRate);
	}
	else
		grossPay = hoursWorked * payRate;

	return grossPay;
}
