#include <stdio.h>

/* Expression */

int main(void)
{

	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int resultdat;

	resultdat = a - b ;
	printf("a - b = %i\n", resultdat);

	resultdat = a * b;
	printf("a * b = %i\n", resultdat);

	resultdat = a / c;
	printf("a / b = %i\n", resultdat);

	resultdat = a + b * c;
	printf("a + b * c = %i\n", resultdat); /* Precedence */

	printf("a * b + c * d = %i\n", a * b + c *d);

	return(0);
}
