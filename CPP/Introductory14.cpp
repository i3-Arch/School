#include <iostream>
#include <iomanip>
using namespace std;

int main() {

		double monthlySales = 0.0;
		double myTotalCommission = 0.0;

		cout << "\n\n  Enter Monthly Sales: $";
		cin >> monthlySales;

		if (monthlySales < 0)
			myTotalCommission = monthlySales * 0.00;

		else if(monthlySales > 0 && monthlySales <= 19999.99)
			myTotalCommission = monthlySales * 0.04;
		
		else if(monthlySales >= 20000 && monthlySales <= 29999.99)
			myTotalCommission = monthlySales * 0.05;
		
		else if(monthlySales >= 30000 && monthlySales <= 39999.99)
			myTotalCommission = monthlySales * 0.06;

		else if(monthlySales >= 40000 && monthlySales <= 49999.99)
			myTotalCommission = monthlySales * 0.07;

		else if(monthlySales >= 50000)
			myTotalCommission = (monthlySales * 0.09);
		
		cout << fixed << setprecision(2);
		cout << "\n\n  Your Total Commission is: $" << myTotalCommission << endl;

		return 0;
}