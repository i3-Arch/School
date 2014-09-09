#include <stdio.h>

int main(void)
{
	int i, NumberOfNums=0, TotalBro=0, DatValue, ValRead;
	float AverageBro;

	ValRead = scanf("%d", &DatValue);
		while(ValRead > 0) {
		if(DatValue < 0) {
			ValRead = scanf("%d",&DatValue);
			continue;
		}
		NumberOfNums++;
		TotalBro += DatValue; /* Equal to totalbro = totalbro + datvalue */
		printf("Read %d\n", DatValue);
		ValRead = scanf("%d",&DatValue);
	}

	AverageBro = (float)TotalBro / (float)NumberOfNums;
	printf("You read %d Values, Average = %f.\n", NumberOfNums, AverageBro);

	return(0);
}
