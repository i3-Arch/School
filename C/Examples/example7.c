#include <stdio.h>
#define MAX 10

/*
 *	------> This is an example for future reference <------
 *	
 */

int main(void)
{
	int data[MAX];
	int i,j,tmp;
	FILE *FileBro;


	/* read in the data */
	FileBro = fopen("input.txt","r");
	if(FileBro == NULL) {
		printf("Could not open file.\n");
		return(0);
	}
	for(i=0; i<MAX; i++) {
		//printf("Enter item #%d: ",i);
		fscanf(FileBro,"%d",&data[i]);
	}

	fclose(FileBro);

	printf("You entered the following items:\n");
	for(i=0; i<MAX; i++) {
		printf("item #%d: %d\n",i,data[i]);
	}

	/* simple sort */
	for(i=0; i<MAX; i++) {
		for(j=i; j<MAX; j++) {
			if(data[i] > data[j]) {
				tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
		}
	}

	FileBro = fopen("output.txt","w");
	if(FileBro == NULL) {
		printf("Could not open output file for writing.\n");
		return(0);
	}
	fprintf(FileBro,"\nSorted Data:\n");
	for(i=0; i<MAX; i++) {
		fprintf(FileBro,"item #%d: %d\n",i,data[i]);
	}
	
	fclose(FileBro);

	return(0);
}
