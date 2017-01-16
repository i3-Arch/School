#include "head.h"

int main()
{

	char myChoice = ' ';

	cout << "\n  ######################" << endl
	     << "  ##                  ##" << endl
	     << "  ##  [1] Add         ##" << endl
	     << "  ##  [2] Multiply    ##" << endl
	     << "  ##  [3] Subtract    ##" << endl
	     << "  ##  [4] Find Slope  ##" << endl
	     << "  ##  [5] Squared     ##" << endl
	     << "  ##  [6] A²+B²=C²    ##" << endl
	     << "  ##  [7] Exit        ##" << endl
	     << "  ##                  ##" << endl
	     << "  ######################" << endl
	     << "\n\n Choice: ";
	cin >> myChoice;

	do
	{
		if(myChoice == '1')
		{
			addMe();
			myChoice = ' ';
		}
		if(myChoice == '2')
		{
			multiMe();
			myChoice = ' ';
		}
		if(myChoice == '3')
		{
			subMe();
			myChoice = ' ';
		}
		if(myChoice == '4')
		{
			slopeMe();
			myChoice = ' ';
		}
		if(myChoice == '5')
		{
			squareMe();
			myChoice = ' ';
		}
		if(myChoice == '6')
		{
			pathagMe();
			myChoice = ' ';
		}
		if(myChoice == '7')
		{
			cout << " Bye! " << endl;
		}
		else
		{
			cout << "\n  ######################" << endl
                 	     << "  ##                  ##" << endl
			     << "  ##  [1] Add         ##" << endl
			     << "  ##  [2] Multiply    ##" << endl
        		     << "  ##  [3] Subtract    ##" << endl
			     << "  ##  [4] Find Slope  ##" << endl
			     << "  ##  [5] Squared     ##" << endl
			     << "  ##  [6] A²+B²=C²    ##" << endl
			     << "  ##  [7] Exit        ##" << endl
                 	     << "  ##                  ##" << endl
			     << "  ######################" << endl
             	 << "\n\n Choice: ";
      		        cin >> myChoice;
		}
	}while(myChoice != '7');

	return 0;
}
