#include <stdio.h>

/*
 *	-----------<> Example for future reference <>------------
 *
 */


int main(void)
{

	char f,m,l;
	int age;
	
	printf("\x1b[37m\n\nEnter Your Initials then your Age\n\x1b[0m");
	printf("\x1b[37m\nExample: \x1b[34mfml 22\n\n\x1b[0m");
	printf("\x1b[31m\n\nAnswer: \x1b[0m");
	scanf("%c %c %c %d", &f, &m, &l, &age);
	printf("\x1b[37mSo your initials are: %c.%c.%c, and you're \x1b[31m%d \x1b[37myears old. \n\x1b[0m",f,m,l,age);
	
	return 0;
}
