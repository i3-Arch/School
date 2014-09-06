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
	printf( "\x1b[37m\n\n Please enter your current age: \x1b[0m" );
	scanf( "%d", &YourAge );
	
	if ( YourAge < 12 && YourAge > 0 ) {
	printf( "\x1b[34m\n\n Wow, have your balls dropped yet?\n\x1b[0m" );
	}
	else if ( YourAge < 19 && YourAge > 11 ) {
	printf( "\x1b[33m\n How many pimples do you have at the moment? \n\x1b[0m" );
	}	
	else if ( YourAge < 30 && YourAge > 18 ) {
	printf( "\x1b[32m\n Sounds like you're in your prime\n\x1b[0m");
	} 
	else if ( YourAge < 40 && YourAge > 29 ) {
	printf( "\x1b[36m\n Wow, You're gettin there...\n\x1b[0m" );
	}
	else if ( YourAge > 40 ) {
	printf( "\x1b[33m\n Damn, Your gettin old \n\x1b[0m" );
	}
	else if ( YourAge == 0 ) {
	printf( "\x1b[33m\n You must be trolling, \x1b[37mC \x1b[32mis srs bidness\n\x1b[0m");
	}
	else {
	printf( "\x1b[36\n Ehh, I guess you're my elder? Since you're so old...\n\x1b[0m" );
	}	
	
	return 0;
}

int submain()
{
	char enter = 0;
	
	system( "clear" );
	printf("\x1b[34m\n\nPlease Press enter to continue\n\n \x1b[0m");
	while (enter != '\r' && enter != '\n') { enter = getchar(); }
	
	return 0;
}


int subfunc()
{

	char ColorBro[10];
	char SystemBro[15];

	printf( "\x1b[37m\n\n Enter Your Favorite Color: \x1b[0m" );
	scanf( "%s", &ColorBro );
	printf( "\x1b[34m\n\n Your Favorite Color is: \x1b[0m" );
	printf( "\x1b[37m%s\n\n\x1b[0m", ColorBro );
		

	if ( strcmp ( ColorBro, "blue" ) ==0 ) {
		printf( "\n\n\x1b[37m Thats my favorite too \n\n\x1b[0m" );
	}
	else if ( strcmp ( ColorBro, "Blue" ) ==0 ) {
		printf( "\x1b[37m\n\n Thats my favorite too \n\n\x1b[0m" );
	}
	else if ( strcmp ( ColorBro, "BLUE" ) ==0 ) {
		printf( "\x1b[37m\n\n Thats my favorite too \n\n\x1b[0m" );
	}
	else {
		printf( "\x1b[37m\n\n Well, Blue is my favorite.\n\n\x1b[0m" );
	}
	
	sleep(4);
	system( "clear" );
	printf( "\x1b[37m\n\n Whats your favorite OS thus far? \n\n\x1b[0m" );
	printf( "\x1b[33m\n\n Favorite Operating System: \x1b[0m" );
	scanf( "%s", &SystemBro );
	printf( "\x1b[34m\n\n So you like: \x1b[0m" );
	printf( "\x1b[37m%s\n\n\x1b[0m", SystemBro );
	
	if ( strcmp ( SystemBro, "Archlinux" ) ==0 ) {
		printf( "\x1b[37m Congrats on being Master Race\n\n\x1b[0m" );
	}
	else if ( strcmp ( SystemBro, "archlinux" ) ==0 ) {
		printf( "\x1b[37m Congrats on being Master Race\n\n\x1b[0m" );
	}
	else if ( strcmp ( SystemBro, "ARCHLINUX" ) ==0 ) {
		printf( "\x1b[37m Congrats on being Master Race\n\n\x1b[0m" );
	}
	
	else if ( strcmp ( SystemBro, "ubuntu" ) == 0 ) {
		printf( "\x1b[31m Wow, you're a newb\n\n\x1b[0m" );
	}
	else {
		printf( "\x1b[31m\n\n Well, it's not archlinux... So you're not Master Race\n\n\x1b[0m" );
	}
	
	return 0;
}

int main()
{
	submain();	
	full();
	subfunc();
}
