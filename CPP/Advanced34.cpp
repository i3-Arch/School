// i3-Arch
// To run on linux  ==> change system("cls") to system("clear") 
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int    myRegistrants	= 0;
	int    totalRegistrants = 0;
	int    myCount          = 1;
	double myTotalCharge    = 0;
	double chargeCompany    = 0;
	double avgPerPerson	= 0.0;
	char   myChoice         = ' ';

	while(toupper(myChoice) != 'Q')
	{
		system("cls"); // to make it easier on the eyes....( clear windows cmd prompt )
		cout << "\n -=[ Enter Company #" << myCount << " Registrants ]=-" << endl;
		cout << "\n Registrants: ";
		cin >> myRegistrants;

		totalRegistrants += myRegistrants;
		
		if(myRegistrants > 0)
		{	
			if(myRegistrants >= 1 && myRegistrants <= 3)
				chargeCompany = myRegistrants * 150;
			else if(myRegistrants >= 4 && myRegistrants <= 9)
				chargeCompany = myRegistrants * 100;
			else
				chargeCompany = myRegistrants * 90;
		}
		else
		{
			cout << "\n * Please Enter Valid Data *" << endl;
			system("pause");  // pause to show that data was invalid
		}	

		system("cls");
		cout << "\n\n   -=[ To Stop Enter Q  ]=-" << endl;
		cout << "\n   -=[ To Continue Enter C ]=-" << endl;
		cout << "\n\n [Q/C]: ";
		cin >> myChoice;
		myTotalCharge += chargeCompany;
		myCount += 1;
	}

	avgPerPerson = myTotalCharge / totalRegistrants;

	cout << fixed << setprecision(2);
	cout << "\n\n Total Registrants: " << totalRegistrants << endl;
	cout << "\n Total Charge: $" <<  myTotalCharge << endl;
	cout << "\n Average Charge Per Registrant: $" << avgPerPerson << endl; 
	cout << "\n\n" << endl;
	return 0;
}
