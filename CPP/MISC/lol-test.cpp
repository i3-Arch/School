#include <iostream>
using namespace std;



int main() {


	char yesNo = ' ';

	
	cout << "\n\n Is Arch Linux Master Race? \n" << endl;
	cout << "\n\n  [Y/N] \n\n" << endl;
	cout << "\n Choice: ";
	
	cin >> yesNo;
	
	do
	{
		if(yesNo == 'N' || yesNo == 'n')
		{
			for(int testA; testA != 9009; testA += 1001)
			{
				cout << "\n\n ARCH LINUX IS MASTER RACE \n\n" << endl;
				//cout << "value of testA: " << testA << endl;
				if(testA > 9000)
					testA = 9009;
			}
			cout << "\n\n ==> Now you know that Arch Linux is in fact Master Race <==\n\n" << endl;
			yesNo = 'Y';
		}
	
		else if(yesNo == 'Y' || yesNo == 'y')
		{
			cout << "\n Swag, You Know The Trufax.... \n\n" << endl;
			cout << "\n We should chill bro \n " << endl;
		}
		else
		{
			
			cout << "\n\n\n\n\n\n\n\n ** [ Valid Options Are Y or N ] **\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
			cout << "\n\n Is Arch Linux Master Race? \n" << endl;
	              	cout  << "\n\n  [Y/N] \n\n" << endl;
        	      	cout << "\n Choice: ";
			cin >> yesNo;
			if(yesNo == 'Y' || yesNo == 'y')
			{
				cout << "\n Swag, You Know The Trufax.... \n\n" << endl;
	                	cout << "\n We should chill bro \n " << endl;
			}
		}

	
	}while(yesNo != 'Y' && yesNo != 'y');
	

	return 0;	
}
