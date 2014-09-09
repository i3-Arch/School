#include <stdio.h>

int main(void)
{
	int i, NumberOfNums=0, TotalBro=0, DatValue;
	float AverageBro;

	printf("How many numbers are to be read?");
	scanf("%d", &NumberOfNums);

	for(i=0; i<NumberOfNums; i++) {
		scanf("%d", &DatValue);
		TotalBro += DatValue; /* Equal to totalbro = totalbro + datvalue */
		printf("Read %d\n", DatValue);
	}

	AverageBro = (float)TotalBro / (float)NumberOfNums;
	printf("You read %d Values, Average = %f.\n", NumberOfNums, AverageBro);

	return(0);
}
