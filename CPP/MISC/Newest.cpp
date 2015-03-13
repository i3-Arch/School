#include <iostream>

int main() {

	int    myPounds    = 0;
	double myShipping  = 0.0;
	double myPrice     = 0.0;
	double myCalc	   = 0.0;
	char   yesNo	   = ' ';


	std::cout << "		################################" << std::endl;
	std::cout << "		##                            ##" << std::endl;
	std::cout << "		##   Drug Dealer Calculator   ##" << std::endl;
	std::cout << "		##                            ##" << std::endl;
	std::cout << "		################################" << std::endl;

	std::cout << "	==> Enter Number of Pounds You Would Like to Purchase <== \n\n" << std::endl;
	std::cout << "	==> Pounds: ";
	
	std::cin >> myPounds;
	
	std::cout << "\n\n	==> Enter Price Per Pound <==\n\n" << std::endl;
	std::cout << "	==> Price Per Pound: ";

	std::cin >> myPrice;

	std::cout << "	Would you like to use OVERNIGHT shipping?\n\n" << std::endl;
	std::cout << "		--      TAX IS $0.08	--	   \n" << std::endl;
	std::cout << "\n  ==> [Y/N] Choice: ";
	
	std::cin >> yesNo;

	if (yesNo == 'Y' || yesNo == 'y') {
		myCalc = static_cast <double> (myPounds * myPrice + 15.08);
	}
	else {
		myCalc = static_cast <double> (myPounds * myPrice + 5.08);
	}


	std::cout << "	==> Your Total is: $" << myCalc << " for " << myPounds << " Pounds " << "==> @ Price: $" << myPrice << std::endl;

	return 0;
}
