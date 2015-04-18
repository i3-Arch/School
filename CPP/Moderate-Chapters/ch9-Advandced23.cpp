#include <iostream>
#include <iomanip>
using namespace std;


double getTestScore();
double calcAverage(double, double);

int main ()
{
	double score = getTestScore();
	double sum   = 0.0;

	for (int counter = 1; counter <= 3; counter ++)
	{
		cout << "\n\n Enter test score #" << counter << ": ";
		cin >> score;
		sum += score;
	}

	cout << fixed << setprecision(2);
	cout << "\n\n The average is " << calcAverage(score, sum) << endl;

	return 0;
}


double getTestScore()
{
	double score = 0.0;
	double sum = 0.0; //accumulator

	sum += score;

	return score;
}

double calcAverage (double score, double sum)
{
	double average = sum / 3;
	return average;
}