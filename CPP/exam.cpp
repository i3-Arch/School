// i3-Arch
#include <iostream>
using namespace std;

int main() {

	int candyBars		=   0;  // Candy bars sold
	const double clubProfit = .75;  // Profit each candy bar
	const double studentGov	= .10;  // Student government percentage
	double studentGovAmt	= 0.0;  // Student government amount/total
	double computerClubAmt	= 0.0;  // Computer Club amount/total

	// Not sure whether i should \n or endl below ( whats better )
	cout << "########################################\n";
	cout << "##                                    ##\n";
	cout << "##        Candy Bar Fundraiser        ##\n";
	cout << "##                                    ##\n";
	cout << "########################################\n\n";
	
	cout << "How many candy bars sold?" << endl;
	cout << "Candy Bars Sold: ";
	cin >> candyBars;
	
    	static_cast <double> (studentGovAmt   = (candyBars * clubProfit) * studentGov);
	static_cast <double> (computerClubAmt = (candyBars * clubProfit) - studentGovAmt);
	
	cout << "Total Amount given to SGA: $" << studentGovAmt << endl;
	cout << "Total Amount for Computer Club: $" << computerClubAmt << endl;

	return 0;
}
