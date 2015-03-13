#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	const double SHIPPING_FEE		= 15.0;
	int    myPounds				= 0;
	double myPrice				= 0.0;
	double myTotal				= 0.0;
	double myCalc				= 0.0;
	char   myShipping			= ' ';

	cout << "	Enter Pounds of Tea Ordered: ";
	cin >> myPounds;
	cout << "	Enter Price Per Pound: ";
	cin >> myPrice;
	cout << "	Do you pay a SHIPPING FEE?   [Y/N]: ";
	cin >> myShipping;


	if (toupper(myShipping) == 'Y')
		myTotal = static_cast<double>(myPrice * myPounds) + SHIPPING_FEE;
	else
		myTotal = static_cast<double>(myPrice * myPounds);

	cout << fixed << setprecision(2);
	cout << "\n\n	====>   Total Due: $" << myTotal << " <====" << endl;

	return 0;
}
