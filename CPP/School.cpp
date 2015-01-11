// Created by i3-Arch on 1-11-2015
#include <iostream>
using namespace std;

int main()
{	
	
	double TotalBill = 		0.0;		// Declare Variables
	double Liqour = 		0.0;
	double TipPercent = 	0.0;
	double TotalNoLiqour =	0.0;
	double Tip =			0.0;

	cout << "Enter the total of the bill: "; 	// Enter input items
	cin >> TotalBill;
	cout << "Enter the your liqour charge: ";
	cin >> Liqour;
	cout << "Enter the tip percentage in decimal format: ";
	cin >> TipPercent;

	TotalNoLiqour = TotalBill - Liqour;		// Calculate the total without liqour and the tip
	Tip = TotalNoLiqour * TipPercent;

	cout << "Tip: $" << Tip << endl;		// Display the output item

	return 0;
}


//EOF
