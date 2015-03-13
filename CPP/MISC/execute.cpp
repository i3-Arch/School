#include <iostream>
#include <stdlib.h>

int main() {

	int theScale = 0;
	
	std::cout << "           ###################################\n";
	std::cout << "           ##                               ##\n";
	std::cout << "           ##            WELCOME            ##\n";
	std::cout << "           ##                               ##\n";
	std::cout << "           ###################################\n\n";

	system("echo -n 'Current Directory: '; pwd");
	
	std::cout << "\n\n 	On a scale from -->   1 - 10";
	std::cout << "\n\n	How lame is this script - 10 Being the MOST LAME\n\n";
	std::cout << "\nChoice: ";
	
	std::cin >> theScale;
	std::cout << "\nSo you said: " << theScale;

	if (theScale >= 11) 
	{
		std::cout << "\n\nThe scale is from ==>  1 to 10\n\n" << std::endl;
	}
	else if (theScale <= 4)
	{
		std::cout << "\n\n Right?   Check out ==> https://github.com/i3-Arch" << std::endl;
	}
	else if (theScale == 10)
	{
		std::cout << "\n\nTHIS C++ SCRIPT IS LEGEND !?!?!?!?\n\n" << std::endl;
	}
	else
	{
		std::cout << "\n\n Also cocks" << std::endl;
	}

	return 0;
}
