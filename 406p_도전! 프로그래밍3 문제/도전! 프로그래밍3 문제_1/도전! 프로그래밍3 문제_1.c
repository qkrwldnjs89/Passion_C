#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void verticalSwap(int arr[][4], int row)
{
	int tmp[4][4];
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 4; j++)
		{
			tmp[i][j] = arr[i][j];		
		}
	}
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = tmp[3-j][i]; 
		}
	}
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	return;
}
int main(void) 
{
	int arr[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	int rep;
	int i;
	printf("90도 회전할 횟수를 입력: ");
	scanf("%d", &rep);

	for (i = 0; i < rep; i++)
	{
		printf("#case %d \n", i + 1);
		verticalSwap(arr, sizeof(arr)/sizeof(arr[0]));
	}
	
	return 0;
}
