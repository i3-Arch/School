#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int    myRegistrants	= 0;
	int    totalRegistrants = 0;
	int    myCount          = 1;
	int    myTotalCharge	= 0;
	double chargeCompany    = 0.0;
	double avgPerPerson	= 0.0;

	cout << "Enter a negative number to Quit or 0 to quit" << endl;
	cout << "\n -=[ Enter Company #1 Registrants ]=-" << endl;
	cout << "\n Registrants: ";
	cin >> myRegistrants;

	while(myRegistrants > 0)
	{
		if(myRegistrants >= 1 && myRegistrants <= 3)
			chargeCompany = myRegistrants * 150;
		else if(myRegistrants >= 4 && myRegistrants <= 9)
			chargeCompany = myRegistrants * 100;
		else
			chargeCompany = myRegistrants * 90;
		
		totalRegistrants += myRegistrants;
		myTotalCharge += chargeCompany;
		myCount += 1;
		system("cls"); // to make it easier on the eyes....( clear windows cmd prompt )
		cout << "Enter a negative number to Quit or 0 to quit" << endl;
		cout << "\n -=[ Enter Company #" << myCount << " Registrants ]=-" << endl;
		cout << "\n Registrants: ";
		cin >> myRegistrants;
	}
	if(totalRegistrants > 0)
		avgPerPerson = static_cast<double>(myTotalCharge) / static_cast<double>(totalRegistrants);
	else
	{
		cout << "\n\n Total Registrants is NOT greater than 0" << endl;
		cout << "\n\n Please Run The Program Again" << endl;
	}
	cout << fixed << setprecision(2);
	cout << "\n\n Total Registrants: " << totalRegistrants << endl;
	cout << "\n Total Charge: $" <<  myTotalCharge << endl;
	cout << "\n Average Charge Per Registrant: $" << avgPerPerson << endl; 
	cout << "\n\n" << endl;
	return 0;
}
