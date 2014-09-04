#include <stdio.h>
#include <curses.h>

int main()   
{
	int YourAge;

	system( "clear" );
	
	/*printf("\x1b[31mThis is red text\x1b[0m\n");
	printf("\x1b[32mThis is green text\x1b[0m\n");
	printf("\x1b[33mThis is yellow text\x1b[0m\n");
	printf("\x1b[34mThis is blue text\x1b[0m\n");
	printf("\x1b[35mThis is purple text\x1b[0m\n");
	printf("\x1b[36mThis is orange text\x1b[0m\n");
	printf("\x1b[37mThis is white text\x1b[0m\n");
	printf("\x1b[38mThis is grey text\x1b[0m\n"); 
	*/
	
	printf( "\x1b[37m\n\nPlease enter your current age: \x1b[0m" );
	scanf( "%d", &YourAge );
	if ( YourAge < 12 && YourAge > 0 ) {
	printf( "\x1b[34m\n\nWow, have your balls dropped yet?\n\x1b[0m" );
	}
	else if ( YourAge < 19 && YourAge > 11 ) {
	printf( "\x1b[33m\nHow many pimples do you have at the moment? \n\x1b[0m" );
	}
	else if ( YourAge < 30 && YourAge > 18 ) {
	printf( "\x1b[32m\nSounds like you're in your prime\n\x1b[0m");
	}
	else if ( YourAge < 40 && YourAge > 29 ) {
	printf( "\x1b[36m\nWow, You're gettin there...\n\x1b[0m" );
	}
	else if ( YourAge > 40 ) {
	printf( "\x1b[33m\nDamn, Your gettin old \n\x1b[0m" );
	}
	else if ( YourAge == 0 ) {
	printf( "\x1b[31m\nYou must be trolling, \x1b[37mC \x1b[32mis srs bidness\n\x1b[0m");
	}
	else {
	printf( "\x1b[36\nEhh, I guess you're my elder? Since you're so old...\n\x1b[0m" );
	}
	
	subfunc();
	return 0;
}

int subfunc()
{
	char ColorBro[10];

	printf( "\x1b[37m\n\n Please Enter Your Favorite Color: \x1b[0m" );
	scanf( "%s", &ColorBro );
	printf( "\x1b[34m\n\nYour Favorite Color is: \x1b[0m" );
	printf( "\x1b[37m%s\n\n\x1b[0m", ColorBro );
	
	return 0;
}
