#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {

	int myIntA = 0;

	
	cout << "\n\n Enter A Number: ";
	cin >> myIntA;

	if(myIntA > 0)
	{
		for(int myIntB = myIntA; myIntB < 9002; myIntB += 1)
		{
			cout << "Incrimenting by 1 till over 9000 Bro ==>  " << myIntB << endl;
	
		}
	
	cout << "\n\n The Original NUMBER You Entered is: " << myIntA << endl;
	}
	else
		while(myIntA < 0)
		{
			
			cout << "\n\n ** PLEASE ENTER A NUMBER GREATER THAN 0 **\n\n" << endl;
			cout << "\n\n Enter A Number: ";
			cin >> myIntA;

		}

	return 0;
}
