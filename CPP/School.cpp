// Created by i3-Arch on 1-11-2015
#include <iostream>

int main()
{	
	
	// Declare Variables
	
	double TotalBill = 		0.0;		
	double Liqour = 		0.0;
	double TipPercent = 		0.0;
	double TotalNoLiqour =		0.0;
	double Tip =			0.0;

	// Enter input items

	std::cout << "Enter the total of the bill: "; 	
	std::cin >> TotalBill;
	std::cout << "Enter the your liqour charge: ";
	std::cin >> Liqour;
	std::cout << "Enter the tip percentage in decimal format: ";
	std::cin >> TipPercent;

	// Calculate the total without liqour and the tip

	TotalNoLiqour = TotalBill - Liqour;	
	Tip = TotalNoLiqour * TipPercent;

	// Display the output item

	std::cout << "Tip: $" << Tip << std::endl;	
	
	return 0;
}
//EOF
