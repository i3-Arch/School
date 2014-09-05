/*   This is just a lame script I made in C... 
 *
 *			Forgive me for being a newb and creating un-nessasary function ( submain )
 *				-- i3-Arch --
 */

#include <stdio.h>

int full()   
{
	
	int YourAge;

	system( "clear" );
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
	printf( "\x1b[33m\nYou must be trolling, \x1b[37mC \x1b[32mis srs bidness\n\x1b[0m");
	}
	else {
	printf( "\x1b[36\nEhh, I guess you're my elder? Since you're so old...\n\x1b[0m" );
	}	
	
	return 0;
}

int submain()
{
	char enter = 0;
	printf("\x1b[34m\n\nPlease Press enter to continue\n\n \x1b[0m");
	while (enter != '\r' && enter != '\n') { enter = getchar(); }
	
	return 0;
}


int subfunc()
{

	char ColorBro[10];
	
	printf( "\x1b[37m\n\n Enter Your Favorite Color: \x1b[0m" );
	scanf( "%s", &ColorBro );
	printf( "\x1b[34m\n\nYour Favorite Color is: \x1b[0m" );
	printf( "\x1b[37m%s\n\n\x1b[0m", ColorBro );

	return 0;
}

int main()
{
	submain();	
	full();
	subfunc();
}
