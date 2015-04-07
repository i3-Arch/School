#include <iostream>
#include <stdlib.h>
using namespace std;


int main() {

	int myChoice = 0;
	int winOnix  = 0;
	
	cout << "\n\n Choose Your OS \n" << endl;
	cout << " [1] Windows" << endl;
	cout << " [2] Linux / Nix" << endl;
	cout << "\n OS Type: ";
	cin >> winOnix;
	
	if(winOnix == 1)
		system("cls");
	else
		system("clear");

	while(winOnix != 1 && winOnix != 2)
	{
		cout << "\n\n Choose [1] or [2] \n\n" << endl;
		cout << "\n\n Choose Your OS \n" << endl;
		cout << " [1] Windows" << endl;
		cout << " [2] Linux / Nix" << endl;
		cout << "\n OS Type: ";
		cin >> winOnix;
	
		if(winOnix == 1)
			system("cls");
		else if(winOnix == 2)
			system("clear");
		else
			cout << "\n\n Choose [1] or [2] \n\n" << endl;
		//endif
	}

	do 
	{
		cout << "\n\n Please Enter Your Choice" << endl;
		cout << "\n\n [1] Show Author Info " << endl;
		cout << "\n\n [2] Show BlackArch Art " << endl;
		cout << "\n\n [3] Exit This Script " << endl;
		cout << "\n Choice: ";
		cin >> myChoice;
		
		if(myChoice == 1)
		{
			if(winOnix == 1)
			{
				system("cls");
				cout << "\n [Author] ===> i3-Arch <===" << endl;
			}
			else
			{
				system("clear");
				cout << "\n [Author] ===> i3-Arch <===" << endl;
			}

		}
		else if(myChoice == 2)
		{
			if(winOnix == 1) 
			{
				system("cls");
			  	cout << "              ...	\n"
			     	     << "	     ;::::;	\n"
				     << "	   ;::::; :;	DON'T FEAR THE REAPER... \n"
				     << "        ;:::::'   :;        \n"
				     << "	;:::::;     ;.			-={ i3-BlackArch }=-\n"
				     << "      ,:::::'       ;           OOO \n"
				     << "      ::::::;       ;          OOOOO \n"
				     << "      ;:::::;       ;         OOOOOOOO\n"
				     << "     ,;::::::;     ;'         / OOOOOOO\n"
				     << "   ;:::::::::`. ,,,;.        /  / DOOOOOO\n"
				     << " .';:::::::::::::::::;,     /  /     DOOOO\n"
				     << ",::::::;::::::;;;;::::;,   /  /        DOOO\n"
				     << ";`::::::`'::::::;;;::::: ,#/  /          DOOO\n"
				     << ":`:::::::`;::::::;;::: ;::#  /            DOOO\n"
				     << "::`:::::::`;:::::::: ;::::# /              DOO\n"
				     << "`:`:::::::`;:::::: ;::::::#/               DOO\n"
				     << ":::`:::::::`;; ;:::::::::##                OO\n"
				     << "::::`:::::::`;::::::::;:::#                OO\n"
				     << "`:::::`::::::::::::;'`:;::#                O\n"
				     << " `:::::`::::::::;' /  / `:#\n"
				     << "  ::::::`:::::;'  /  /   `#\n" << endl;
		
			}
			else
			{
				system("clear");
                        	cout << "              ...      \n"
                                << "            ;::::;     \n"
                                << "          ;::::; :;    DON'T FEAR THE REAPER... \n"
                                << "        ;:::::'   :;        \n"
                                << "       ;:::::;     ;.                  -={ i3-BlackArch }=-\n"
                                << "      ,:::::'       ;           OOO \n"
                                << "      ::::::;       ;          OOOOO \n"
                                << "      ;:::::;       ;         OOOOOOOO\n"
                                << "     ,;::::::;     ;'         / OOOOOOO\n"
                                << "   ;:::::::::`. ,,,;.        /  / DOOOOOO\n"
                                << " .';:::::::::::::::::;,     /  /     DOOOO\n"
                                << ",::::::;::::::;;;;::::;,   /  /        DOOO\n"
                                << ";`::::::`'::::::;;;::::: ,#/  /          DOOO\n"
                                << ":`:::::::`;::::::;;::: ;::#  /            DOOO\n"
                                << "::`:::::::`;:::::::: ;::::# /              DOO\n"
                                << "`:`:::::::`;:::::: ;::::::#/               DOO\n"
                                << ":::`:::::::`;; ;:::::::::##                OO\n"
                                << "::::`:::::::`;::::::::;:::#                OO\n"
                                << "`:::::`::::::::::::;'`:;::#                O\n"
                                << " `:::::`::::::::;' /  / `:#\n" 
                                << "  ::::::`:::::;'  /  /   `#\n" << endl;

			}
		}
		else if(myChoice == 3)
			myChoice = 3;
		else
		{
			
			if(winOnix == 1)
			{
				system("cls");
				myChoice = 0;
				cout << "\n\n Valid Options Are [1] , [2] , or [3] \n" << endl;
			}	
			else
			{
				system("clear");
				myChoice = 0;
			        cout << "\n\n Valid Options Are [1] , [2] , or [3] \n" << endl;
			}

		}
	
	} while(myChoice != 3);

	return 0;
}
