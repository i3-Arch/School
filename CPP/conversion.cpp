#include <iostream>

int main() {

	const double BRITISH_POUNDS	= 0.6318;
	const double MEXICAN_PESOS	= 12.8863;
	const double JAPANESE_YEN	= 82.34;
	double amtBritish		= 0.0;
	double amtMexican		= 0.0;
	double amtJapanese		= 0.0;
	double americanDollars		= 0.0;

	printf("Enter Amount of American Dollars to convert: ");
	std::cin >> americanDollars;

	amtBritish	= americanDollars * BRITISH_POUNDS;
	amtMexican	= americanDollars * MEXICAN_PESOS;
	amtJapanese	= americanDollars * JAPANESE_YEN;

	std::cout << "American Dollars: $ " << americanDollars << std::endl;
	std::cout << "British Pounds: £ " << amtBritish << std::endl;
	std::cout << "Mexican Pesos: $ " << amtMexican << std::endl;
	std::cout << "Japanese Yen: ¥ " << amtJapanese << std::endl;

	return 0;
}
