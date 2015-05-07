// By: i3-Arch

#include "Directives.h"
#include "Functions.h"



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
