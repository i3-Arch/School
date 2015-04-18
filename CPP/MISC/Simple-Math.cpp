/*
 *   -={ Fucking Bored }=-
 *   ARCHLINUX MASTER RACE
 *
 */

#include <iostream>
using namespace std;


int main()
{
	char  myChoice = ' ';
	int  num1     = 0;
	int  num2     = 0;
	int  myAnswer = 0;
	
	cout << "\n\n ===============[-- Choices --]==============\n\n" 
	     << "	[1] Add \n"
	     << "	[2] Multiply \n"
	     << "	[3] Divide \n"
	     << "\nChoose 1, 2, or 3 \n"
	     << "\n\n Tell Me Two Numbers to Add, Multiply, or Divide.  * Enter Q to Quit * \n\n\n"
	     << "Choice: ";	
	cin >> myChoice;
	
	if(myChoice == '1' || myChoice == '2' || myChoice == '3')
	{


		while(myChoice != 'Q' && myChoice != 'q')
		{

			cout << "\n\n First Number: ";
			cin >> num1;
			cout << "\n\n Second Number: ";
			cin >> num2;
				
			if(myChoice == '1')
				myAnswer = num1 + num2;
	
			else if(myChoice == '2')
				myAnswer = num1 * num2;
			
			else
			{
				if(num2 == 0 || num1 == 0)
				{
					cout << "\n\n Cannot Divide by 0 \n\n" << endl;
					myAnswer = 0;
				}
				else
					myAnswer = num1 / num2;
			}
			cout << "\n\n\n\n\n  [*]=====> The Answer is: " << myAnswer << endl << endl << endl;
		
	                cout << "\n\n ===============[-- Choices --]==============\n\n"
   			     << "       [1] Add \n"
                  	     << "       [2] Multiply \n"
              		     << "       [3] Divide \n"
               		     << "\nChoose 1, 2, or 3 \n"
               		     << "\n\n Tell Me Two Numbers to Add, Multiply, or Divide.  * Enter Q to Quit * \n\n\n"
               		     << "Choice: ";
			cin >> myChoice;
		}
	
	}
	
	else
	{
		cout << "\n\n\n\n      ************************************\n"
		     << "      ************** ERROR ***************\n"
		     << "      ************************************\n"
		     << "\n\n   ==> You Entered An Invalid Choice <==\n\n\n"
		     << "\n\n You Entered: " << myChoice << ", and OPTIONS are 1, 2, or 3 \n\n"
		     << "      ++++++++++++++++++++++++++++++++++++++\n"
                     << "      ++++++++++++++ Exiting +++++++++++++++\n"
                     << "      ++++++++++++++++++++++++++++++++++++++\n" << endl;
	}	

	cout << "      ************************************\n"
             << "      ************** GOODBYE *************\n"
             << "      ************************************\n" << endl;


	return 0;
}
