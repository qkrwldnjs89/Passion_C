#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int sum, i, j, k;
	double mean;
	int record[3][3][2] = {
		{
			{70, 80},
			{94, 90},
			{70, 85}
		},
		{
			{83, 90},
			{95, 60},
			{90, 82}
		},
		{
			{98, 89},
			{99, 94},
			{91, 87}
		}
	};
	
	for (i = 0; i < 3; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
			for (k = 0; k < 2; k++)
				sum += record[i][j][k];
		mean = (double)sum / 6;
		printf("%d 번째 학급 전체 평균: %g \n", i + 1, mean);
	}
	
	return 0;
}
