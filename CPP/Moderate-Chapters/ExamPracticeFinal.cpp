#include <iostream>
#include <iomanip>
using std::cin; 
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

/* PROTOTYPES */
void myGreet();
void getTotal(int, double, double&);
void myDisplay(double);
double getHourlyPay();
int getHoursWkd();


int main()
{
	myGreet(); 
	
	double myTotal = 0.0;
	double hourlyPay = getHourlyPay();
	int hoursWkd = getHoursWkd();

	getTotal(hoursWkd, hourlyPay, myTotal);
	myDisplay(myTotal);

	return 0;
}

void myGreet()
{
	cout << "\n\n\n\n\n\n\n\n\n\n"
		 << "        ################################ \n"
		 << "        ##                            ## \n"
		 << "        ##      Salary Calculator     ## \n"
		 << "        ##                            ## \n"
		 << "        ################################ \n" << endl;
}

double getHourlyPay()
{
	double hourlyPay = 0.0;

	do
	{
		cout << "\n\n Enter Your Hourly Pay \n\n"
			 << "\n Hourly Pay: $";
		cin >> hourlyPay;

		if(hourlyPay > 0)
			cout << "\n\n Thank You \n" << endl;
		else
			cout << "\n\n Sorry... Hourly Pay Can't Be Less Than or Equal to $0 \n" << endl;

	}while(hourlyPay <= 0);

	return hourlyPay;
}

int getHoursWkd()
{
	int hoursWkd = 0;

	do
	{
		cout << "\n\n Enter Your Hours Worked \n\n"
			 << "\n Hours: ";
		cin >> hoursWkd;

		if(hoursWkd > 0)
			cout << "\n\n Thank You \n" << endl;
		else
			cout << "\n\n Sorry... Hours cant be less than or Equal to 0 \n" << endl;

	}while(hoursWkd <= 0);


	return hoursWkd;
}

void getTotal(int hoursWkd, double hourlyPay, double &myTotal)
{
	if(hoursWkd > 40)
	{
		int overTimeHrs = hoursWkd - 40;
		int regHoursTot = hourlyPay * 40;

		myTotal = overTimeHrs * (hourlyPay * 1.5) + regHoursTot;
	}
	else
		myTotal = static_cast<double>(hoursWkd) * hourlyPay;
	
}

void myDisplay(double myTotal)
{
	cout << fixed << setprecision(2);
	cout << "\n\n Your Total Pay is: $" << myTotal << endl;
}
