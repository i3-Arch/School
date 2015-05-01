#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() 
{

	int myChoice;
	bool myTest = true;


	while (myTest != false)
	{

		cout << "**********************************\n"
		     << "**     [1]  Print Dumb Stuff    **\n"
		     << "**     [2]  More Stuff          **\n"
		     << "**     [3]  MOAR STUFF          **\n"
		     << "**     [4]  Exit This Script    **\n"
		     << "**********************************\n"
		     << "\n\n\n   ==> Choice: ";

		cin >> myChoice; 

		switch (myChoice)
		{
			case 1:
				cout << "\n    Doin dumb print\n\n";
			break;
		
			case 2:
				cout << "\n     More....\n\n";
			break;
	
			case 3:
				cout << "\n     MAAAAOOOORRRR\n\n";
			break;
	
			case 4:
				cout << "See you later.\n\n";
				myTest = false;
			break;
	
			default:
				cout << "\n\n  *** Not a Valid Choice ***\n\n";
				cout << "\n\n   ==>  Choose Again  <==\n\n";
				cin.clear();   // Entering a letter without 
				cin.get();     // these two lines it will loop until ctrl+c
			break;
        	}

    	}
	
	return 0;
}
