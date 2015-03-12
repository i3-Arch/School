#include <iostream>
using namespace std;
 
int main ()
{
	int  myIncome       = 0;
	int  myExpense      = 0;
	int  myTotalIncome  = 0;
	int  myTotalExpense = 0;
	int  myProfit       = 0;
	char myAction       = ' ';
	char myAction2      = ' ';

	while(toupper(myAction) != 'Q')
	{
		cout << "\n Enter Company Income Amount: $";
		cin >> myIncome;
		myTotalIncome += myIncome;
		cout << "\n\n   =[ To Stop Enter Q  ]=" << endl;
		cout << "\n   =[ To Continue Enter C ]=" << endl;
		cout << "\n\n [Q/C]: ";
		cin >> myAction;
	}

	while(toupper(myAction2) != 'Q')
	{
		cout << "\n Enter Company Expense Amount: $";
		cin >> myExpense;
		myTotalExpense += myExpense;
		cout << "\n\n   =[ To Stop Enter Q  ]=" << endl;
		cout << "\n   =[ To Continue Enter C ]=" << endl;
		cout << "\n\n [Q/C]: ";
		cin >> myAction2;
	}

	myProfit = myTotalIncome - myTotalExpense;


	if(myProfit <= -1)
	{
		cout << "\n Your Total Income is: $" << myTotalIncome << endl;
		cout << "\n Your Total Expenses are: $" << myTotalExpense << endl;
		cout << "\n Your Total Loss is: $" << myProfit << endl;
	}
	else
	{
		cout << "\n Your Total Income is: $" << myTotalIncome << endl;
		cout << "\n Your Total Expenses are: $" << myTotalExpense << endl;
		cout << "\n Your Total Profit is: $" << myProfit << endl;
	}

   return 0;
}