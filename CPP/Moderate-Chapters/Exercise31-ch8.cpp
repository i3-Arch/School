// i3-Arch
#include <iostream>
#include <iomanip>
using namespace std;


int main() {

	int    myYear   = 1;
	double mySalary = 0.0;
	double myRaise	= 0.05;
	double myCalc   = 0.0;



	do {
		if(myYear == 1)
		{
			cout << "Enter Salary for Year " << myYear << "\n Salary: $";
			cin >> mySalary;
		}
		cout << fixed << setprecision(2);
		myCalc = (mySalary * myRaise);
		mySalary += myCalc;
		cout << "	Salary for Year #" << myYear << "\n ==> $" << mySalary << "\n" << endl;
		myYear += 1;

	   } while(myYear <= 3);

	return 0;
}