#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr[3][9];
	int i, j;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
			arr[i][j] = (i + 2) * (j + 1);
	}
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			printf("%d ¡¿ %d = %2d ", i + 2, j + 1, arr[i][j]);			
		}
		printf("\n"); 
	}
	return 0;
}
