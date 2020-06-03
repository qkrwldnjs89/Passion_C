#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arrA[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};
	int arrB[4][2];
	int i, j;
	
	for (i = 0; i < 4; i++)
		for (j = 0; j < 2; j++)
			arrB[i][j] = arrA[j][i];
	
	printf("arrA \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", arrA[i][j]);
		printf("\n");
	}
	
	printf("arrB \n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d ", arrB[i][j]);
		printf("\n");
	}
		
	return 0;
}
