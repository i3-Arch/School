#include <stdio.h>

int main()   
{
	int YourAge;

	system( "clear" );
	
	printf( "\n\nPlease enter your current age: " );
	scanf( "%d", &YourAge );
	if ( YourAge < 12 && YourAge > 0 ) {
	printf( "\n\nWow, have your balls dropped yet?\n" );
	}
	else if ( YourAge < 19 && YourAge > 11 ) {
	printf( "\nHow many pimples do you have at the moment? \n" );
	}
	else if ( YourAge < 30 && YourAge > 18 ) {
	printf( "\nSounds like you're in your prime\n");
	}
	else if ( YourAge < 40 && YourAge > 29 ) {
	printf( "\nWow, You're gettin there...\n" );
	}
	else if ( YourAge > 40 ) {
	printf( "\nDamn, Your gettin old \n" );
	}
	else if ( YourAge == 0 ) {
	printf( "\nYou must be trolling, C is srs bidness\n");
	}
	else {
	printf( "\nEhh, I guess you're my elder? Since you're so old...\n" );
	}
	
	subfunc();
	return 0;
}

int subfunc()
{
	char ColorBro[10];

	printf( "\n\n Please Enter Your Favorite Color: " );
	scanf( "%s", &ColorBro );
	printf( "\n\nYour Favorite Color is: " );
	printf( "%s\n\n", ColorBro );
	
	return 0;
}
