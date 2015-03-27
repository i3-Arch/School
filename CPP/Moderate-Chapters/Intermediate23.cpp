#include <iostream>
using namespace std;

int main() {

	int myStore    = 1;
	int payrollAmt = 0;
	int myPayroll  = 0;

		cout << "\n\n  ==> Enter -1 to Quit <==" << endl;
		cout << "\n Enter Payroll Amount for Store #1" << endl;
		cout << "\n Payroll Amount: $";
		cin >> myPayroll;
		payrollAmt += myPayroll;

		if(myPayroll != -1)
		{
			while(myStore < 4)
				{
					cout << "\n Enter Payroll Amount for Store #" << myStore << endl;
					cout << "\n To Stop Entering Amount for Store #" << myStore << " Please Enter -1" << endl;
					cout << "\n Payroll Amount: $";
					cin >> myPayroll;
					if(myPayroll != -1)
						payrollAmt += myPayroll;
					else if(myPayroll == -1)
					{
						myStore += 1;
						myPayroll = 0;
					}
					system("cls");
				}
	
			cout << "Total Payroll Amount For All 3 Stores is: $" << payrollAmt << endl;
		}

		else
			cout << "\n You Entered -1 To Quit" << endl;


	return 0;
}