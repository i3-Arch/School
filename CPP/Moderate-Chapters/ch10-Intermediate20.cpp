#include <iostream>
#include <iomanip>
using namespace std;


void getEmpGross(int myHours, double myRate, double &myGross);
double getGrossPay(double myTotalGross);



int main()
{

	int myHours         = 0;
	int myCount         = 1;
	double myRate       = 0.0;
	double myGross	    = 0.0;
	double myTotalGross = 0.0;


	cout << "\n ** Enter a Negative Number To Quit ** \n\n" << endl;
	cout << "\n Enter Hours Worked For Employee #" << myCount << endl;
	cout << "\n\n Hours: ";
	cin >> myHours;


	while(myHours > 0)
	{
		cout << "\n Enter Pay Rate: $";
		cin >> myRate;

		getEmpGross(myHours, myRate, myGross);
		myTotalGross += myGross;
		myCount += 1;
		
		cout << "\n ** Enter a Negative Number To Quit ** \n\n" << endl;
		cout << "\n Enter Hours Worked For Employee #" << myCount << endl;
	    	cout << "\n\n Hours: ";
		cin >> myHours;

	}

	getGrossPay(myTotalGross);

	return 0;
}


void getEmpGross(int myHours, double myRate, double &myGross)
{

	if(myHours <= 40)
		myGross = static_cast<double>(myHours) * myRate;
	else
	{
		double overFourty = 0.0;
		double myTotal    = 0.0;


		overFourty = myHours - 40;
		myTotal = 40 * myRate;
		myGross = (myRate * 1.5) * overFourty + myTotal;
	}

	cout << fixed << setprecision(2);
	cout << "\n Employee's Gross: $" << myGross << endl << endl;
}

double getGrossPay(double myTotalGross)
{
	cout << fixed << setprecision(2);
	cout << "\n\n Total Gross Pay For ALL Employee's is \n\n"
             << " Total: $" << myTotalGross << endl << endl;

	return myTotalGross;
}
