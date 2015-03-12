// i3-Arch
#include <iostream>
#include <iomanip>
using namespace std;


int main() {

	int    myYear   = 1;
	double mySalary = 0.0;
	double myRaise	= 0.05;
	double myCalc   = 0.0;

	cout << "	Enter Salary for Year 1" << endl;
	cout << "	Salary: $";
	cin >> mySalary;
	cout << "\n\n" << endl;

	while( myYear <= 3)
	{
		cout << fixed << setprecision(2);
		myCalc = (mySalary * myRaise);
		mySalary += myCalc;
		cout << "	Salary for Year #" << myYear << "\n ==> $" << mySalary << "\n" << endl;
		myYear += 1;
	}

	return 0;
}
