#include <iostream>
#include <iomanip>
using namespace std;

double getHoursWorked();
double getPayRate();
double calcGross(double, double);

int main()
{
    double hoursWorked	= 0;
    double payRate	= 0;
    double grossPay	= 0;

    hoursWorked = getHoursWorked();
    payRate	= getPayRate();

    grossPay = calcGross(hoursWorked, payRate);

	cout << fixed << setprecision(2);
	cout << "\n\n\n The Gross Pay is: $" << grossPay << endl << endl << endl;

    return 0;
}

double getHoursWorked()
{   
	double hoursOfWork;

    cout << "\n\n Enter Hours Worked: ";
    cin >> hoursOfWork;

    return hoursOfWork;
}

double getPayRate()
{
	double rateOfPay;
    
	cout << "\n\n Enter Pay Rate: ";
    cin >> rateOfPay;
  
    return rateOfPay;
}

double calcGross(double workHours, double thePayRate)
{
    double calculatedGross = 0.0;

    calculatedGross = workHours * thePayRate;

    return calculatedGross;
}