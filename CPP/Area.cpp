// i3-Arch
#include <iostream>

int main() {

	double myLength = 0.0;
	double myWidth  = 0.0;
	double squaredArea = 0.0;

	printf("#############################\n");
	printf("##                         ##\n");
	printf("##  Length x Width = Area  ##\n");
	printf("##			   ##\n");
	printf("##     Area Calculator     ##\n");
	printf("##			   ##\n");
	printf("#############################\n");
	
	printf("\n\nEnter Length in feet: ");
		std::cin >> myLength;
		std::cout << "\nThe Length is: " << myLength << " ft." << std::endl;
	printf("\n\nEnter Width in feet: ");
		std::cin >> myWidth;
		std::cout << "\nThe Width is: " << myWidth << " ft." << std::endl;
	squaredArea = myLength * myWidth;
		std::cout << "\nThe Area is: " << squaredArea << " ft." << std::endl;
	
	return 0;
}
