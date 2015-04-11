#include <iostream>
#include <stdlib.h>
using namespace std;




int main() {

	char myChoice = ' ';
	

	do
	{

		cout << "\n\n  +++++++++++++++++++++++++++++++++\n"
	     	     << "  ++ Please Select From The Menu ++\n"
	     	     << "  +++++++++++++++++++++++++++++++++\n\n\n"
	     	     << " [1] Display Current Directory & Home Directory \n"
	     	     << " [2] Display Output of 'ip route' and External IP Address\n"
	     	     << " [3] Exit This Script \n" << endl;
		cout << "\n Choice: ";
		cin >> myChoice;
		

		if(myChoice == '1' || myChoice == '2' || myChoice == '3')
		{
			if(myChoice == '1')
			{	
				system("clear");
				cout << "\n\n\n\n" << endl;
				system("echo '  Your Working Dir is:' $PWD");
				system("echo '  Your Home Dir is:' $HOME");
			}

			else if(myChoice == '2')
			{
				system("clear");
				cout << "===========================\n" 
			     	     << "|  Current Routing Table  |\n"
				     << "===========================\n" << endl;
				system("ip route");
				
				system("echo '\n\n\n  Your IP Address is: ' $(curl wtfismyip.com/text 2> myip.txt; rm -f myip.txt) '<===='");
			}
		
			else
			{
				system("clear");
				cout << "\n\n Thanks For Using My Simple C++ Script! \n\n"
				     << "\n My Github: https://Github.com/i3-Arch \n" << endl;
			}

		}	
		else
		{
			while(myChoice != '1' && myChoice != '2' && myChoice != '3')
			{
				cout << " *********************************\n"
			     	     << " ** ERROR: Enter a Valid Option **\n"
			     	     << " *********************************\n"
                        	     << "\n\n\n To Try Again Enter 1 or 2\n\n"
				     << "\n To EXIT Enter 3\n" << endl;
				cout << "\n Choice: ";	
				cin >> myChoice;
				
			}
		}

	}while(myChoice != '3');

	return 0;
}
