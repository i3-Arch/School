// i3-Arch
#include <iostream>
#include <string>

int main()
{
	char Testing[10];
	std::string str;
	str = "Please enter your favorite color";
	std::cout << str << std::endl;
	str = "Color: ";
	std::cout << str;
	std::cin >> Testing;
	std::cout << "So your favorite color is: " << Testing << std::endl;
	if (Testing == "green" || Testing == "GREEN") 
	{
		str = "Hey Cole";
		std::cout << str << std::endl;
	}
	if (Testing == "blue" || Testing == "BLUE")
	{
		str = "Hey Jeremy";
		std::cout << str << std::endl;
	}
	else
	{
		str = "Who the fuck do you think you are?";
		std::cout << str << std::endl;
	}
}
