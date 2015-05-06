#include "Final.h"


int main()
{	
	double labAvg  = 0.0;
	double quizAvg = 0.0;
	double examAvg = 0.0;
	double finAvg  = 0.0;
	char myGrade = ' ';

	getInput(labAvg, quizAvg, examAvg);
	
	myGrade = calcAvg(labAvg, quizAvg, examAvg, finAvg);
	
	displayInfo(myGrade, finAvg);


	return 0;
}
