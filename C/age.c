#include <stdio.h>

 int main()   
 {
	int YourAge;
	
	printf( "Please enter your current age: " );
	scanf( "%d", &YourAge );
	if ( YourAge < 12 && YourAge > 0 ) {
	printf( "Wow, have your balls dropped yet?\n" );
	}
	else if ( YourAge < 19 && YourAge > 11 ) {
	printf( "How many pimples do you have at the moment? \n" );
	}
	else if ( YourAge < 30 && YourAge > 18 ) {
	printf( "Sounds like you're in your prime\n");
	}
	else if ( YourAge < 40 && YourAge > 29 ) {
	printf( "Wow, You're gettin there...\n" );
	}
	else if ( YourAge > 40 ) {
	printf( "Damn, Your gettin old \n" );
	}
	else if ( YourAge == 0 ) {
	printf( "You must be trolling, C is srs bidness\n");
	}
	else {
	printf( "Ehh, I guess you're my elder? Since you're so old...\n" );
	}
	
	return 0;
}
