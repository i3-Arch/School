//SWAG 
#include<stdio.h>

int main()
{

	char YesNo;

	printf("Enter (Y/N): ");
	scanf("%c",&YesNo);
	printf("Let's see what you entered\n","%c",YesNo);
	if (YesNo == 'Y' || YesNo == 'y') 
	{
		printf("IT IS YES \n");
	}
	else
	{
		printf("Why did you choose No  :( \n");
	}
}

