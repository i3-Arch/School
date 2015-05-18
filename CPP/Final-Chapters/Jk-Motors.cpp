/* Displays the number of employees
 * whose salary is greater than a specific amount 
 */

#include <iostream>
using std::cout;
using std::endl;
using std::cin;






int main()
{
	//declare array/variables
	int salaries[10] = {23000, 26000,
			    34000, 21000,
			    54000, 45000,
			    36000, 80000,
			    75000, 34000};

	int searchFor   = 0;
	int numEarnOver = 0;  // counter


	cout << "\n\n ** Enter salary to search for ** \n\n"
	     << "\n [ Enter -1 to Quit ]: ";
	cin >> searchFor;


	while(searchFor != -1)
	{
		for(int sub = 0; sub < 10; sub += 1)
			if(salaries[sub] > searchFor)
				numEarnOver += 1;
			//end if
		//end for

		cout << "\n Number of employees earning "
		     << "more than $" << searchFor << ": "
		     << numEarnOver << endl << endl;


		// Another Salary to Search
		cout << "\n\n ** Enter salary to search for ** \n\n"
		     << "[ Enter -1 to Quit ]: ";
		cin >> searchFor;
		numEarnOver = 0;
	}


	return 0;
}
