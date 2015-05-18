/*
 * Displays contents of 
 * One Dimensional Array
 */

#include <iostream>
#include <iomanip>

using std::setprecision;
using std::fixed;
using std::cout;
using std::endl;
using std::cin;


int main()
{
	// Declare Array
	
	double sales[4] = {0.0};

	// Store data in array
	
	for(int sub = 0; sub < 4; sub += 1)
	{
		cout << "\n\n Enter Sales for Region "
		     << sub + 1 << ": ";		
		cin >> sales[sub];
	}


	// Display
	
	cout << fixed << setprecision(2) << endl << endl;

	for(int sub = 0; sub < 4; sub += 1)
	{
		cout << "\n Sales for Region "
		     << sub + 1 << ": $";
		
		cout << sales[sub] << endl;
	}

	return 0;
}
