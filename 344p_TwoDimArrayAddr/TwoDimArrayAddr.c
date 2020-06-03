#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr[3][2];
	int i, j;
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			printf("%p \n", &arr[i][j]);
	return 0;
}
