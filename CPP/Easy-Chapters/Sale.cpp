#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double itemOnePrice	= 0.0;
	double itemTwoPrice	= 0.0;
	double total        	= 0.0;
	double newPrice     	= 0.0;


	cout << "#######################" << endl;
	cout << "##		      ##" << endl;
	cout << "##    Buy 1 Get 1    ##" << endl;
	cout << "##     Half off      ##" << endl;
	cout << "#######################" << endl;

	cout << "	==>  Enter Item 1 Price: $ ";
	cin >> itemOnePrice;

	cout << "	==>  Enter Item 2 Price: $ ";
	cin >> itemTwoPrice;

	if(itemOnePrice > itemTwoPrice) {
		newPrice = itemTwoPrice / 2;
		total = newPrice + itemOnePrice;
	}

	else {
		newPrice = itemOnePrice / 2;
		total = newPrice + itemTwoPrice;
	}

	cout << fixed << setprecision(2);
	cout << "\n\n	====>   Total Due: $" << total << " <====" << endl;

	return 0;
}
