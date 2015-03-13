#include <iostream>

using namespace std;

int main() {

	int myChoice;
	bool myTest = true;


	while (myTest != false){

		cout << "**********************************\n";
		cout << "**     [1]  Print Dumb Stuff    **\n";
		cout << "**     [2]  More Stuff          **\n";
		cout << "**     [3]  MOAR STUFF          **\n";
		cout << "**     [4]  Exit This Script    **\n";
		cout << "**********************************\n";
		cout << "\n\n\n   ==> Choice: ";

		cin >> myChoice; 

	switch (myChoice){
	case 1:
		cout << "\n    Doin dumb print\n\n";
	// code
		break;
	case 2:
		cout << "\n     More....\n\n";
	// code
		break;
	case 3:
		cout << "\n     MAAAAOOOORRRR\n\n";
	// code
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
