#include "directives.h"
#include "functions.h"

int main()
{
	int myChoice = 0;
	bool myExit = false;

	while(myExit != true)
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
		cin.ignore(256, '\n');

		switch(myChoice)
		{
			case 1:
				addMe();
				cin.clear();
			break;

			case 2:
				multiMe();
				cin.clear();
			break;

			case 3:
				subMe();
				cin.clear();
			break;

			case 4:
				slopeMe();
				cin.clear();
			break;

			case 5:
				squareMe();
				cin.clear();
			break;

			case 6:
				pathagMe();
				cin.clear();
			break;

			case 7:
				cout << " Bye! " << endl;
				myExit = true;
				cin.clear();
			break;
	
			default:
				cin.clear();
				cin.get();
			break;
		}
	}

	return 0;
}
