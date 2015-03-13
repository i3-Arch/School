#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	
	const double CHARGE_PER_GALLON  = 0.007;
	const double MINIMUM_CHARGE     = 16.67;
	double myTotal                  = 0.0;
	int	   numberOfGallons      = 0;
	int    currentMeterReading	= 0;
	int    previousMeterReading	= 0;


	cout << "\n ====> Please Enter CURRENT Meter Reading: ";
	cin >> currentMeterReading;

	cout << "\n ==>  Please Enter PREVIOUS Meter Reading: ";
	cin >> previousMeterReading;

	numberOfGallons = currentMeterReading - previousMeterReading;
	
	if(numberOfGallons <= 2381) {
		myTotal = MINIMUM_CHARGE;
		cout << "\n\n	====>   Number of Gallons: " << numberOfGallons << " <====" << endl;
		cout << "\n\n	** WARNING **" << endl;
		cout << "\n ==> LESS THAN 2381 Gallons (MINIMUM CHARGE) <==" << endl;
		cout << fixed << setprecision(2);
		cout << "\n\n	====>   Total Due: $" << myTotal << " <====" << endl;	
	}
	else {
		myTotal		    = static_cast<double>(CHARGE_PER_GALLON * numberOfGallons);
		cout << "\n\n	====>   Number of Gallons: " << numberOfGallons << " <====" << endl;
		cout << fixed << setprecision(2);
		cout << "\n\n	====>   Total Due: $" << myTotal << " <====" << endl;
	}

	return 0;
}
