#include "head.h"

int main()
{

	char myChoice = ' ';

	cout << "\n  ####################" << endl
	     << "  ##                ##" << endl
	     << "  ##  [1] Add       ##" << endl
	     << "  ##  [2] Multiply  ##" << endl
	     << "  ##  [3] Exit      ##" << endl
	     << "  ##                ##" << endl
	     << "  ####################" << endl
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
		else
		{
			cout << "\n  ####################" << endl
                             << "  ##                ##" << endl
			     << "  ##  [1] Add       ##" << endl
			     << "  ##  [2] Multiply  ##" << endl
        		     << "  ##  [3] Exit      ##" << endl
                             << "  ##                ##" << endl
			     << "  ####################" << endl
             		     << "\n\n Choice: ";
      		        cin >> myChoice;
		}
	}while(myChoice != '3');

	return 0;
};
