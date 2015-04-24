#include <iostream>
#include <iomanip>
using namespace std;


void calcFedTaxes(double &mySal, const double myFWT, double &calcFWT, const double myFICA, double &calcFICA);
void calcNetPay(double mySal, double &calcNet, double &calcFWT, double &calcFICA);
void displayInfo(double &calcNet, double &calcFWT, double &calcFICA);



int main()
{
	const double myFWT  = 0.2;
    const double myFICA = .08;
	double mySal        = 0.0;
	double calcFWT      = 0.0;
	double calcFICA     = 0.0;
	double calcNet      = 0.0;


	cout << "\n\n ** =[ ENTER A NEGATIVE NUMBER TO QUIT ]= ** \n\n"
	     << "\n\n\n Enter The Salary: $";
	cin >> mySal;

	while(mySal > 0)
	{
		calcFedTaxes(mySal, myFWT, calcFWT, myFICA, calcFICA);
		calcNetPay(mySal, calcNet, calcFWT, calcFICA);		
		displayInfo(calcNet, calcFWT, calcFICA);
		
	    cout << "\n\n ** =[ ENTER A NEGATIVE NUMBER TO QUIT ]= ** \n\n"
	     << "\n\n\n Enter The Salary: $";
		cin >> mySal;
	}

	return 0;
}


void calcFedTaxes(double &mySal, double myFWT, double &calcFWT, double myFICA, double &calcFICA)
{
	calcFWT  = mySal * myFWT;
	calcFICA = mySal * myFICA;
}

void calcNetPay(double mySal, double &calcNet, double &calcFWT, double &calcFICA)
{
	calcNet = mySal - (calcFICA + calcFWT);
}

void displayInfo(double &calcNet, double &calcFWT, double &calcFICA)
{
	cout << fixed << setprecision(2);
	cout << "\n Total Net Pay: $" << calcNet << endl;
	cout << "\n Money taken out for FWT: $" << calcFWT << endl;
	cout << "\n Money taken out for FICA: $" << calcFICA << endl;
}