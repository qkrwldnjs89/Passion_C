#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i, j;
	
	/* 2���� �迭 �ʱ�ȭ�� �� 1 */
	int arr1[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	/* 2���� �迭 �ʱ�ȭ�� �� 2 */
	int arr2[3][3] = {
		{1},
		{4, 5},
		{7, 8, 9}
	};
	
	/* 2���� �迭 �ʱ�ȭ�� �� 3 */
	int arr3[3][3] = {1, 2, 3, 4, 5, 6, 7};
	
	// ��º� 
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");	
	}
	printf("\n\n");
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");	
	}
	printf("\n\n");
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr3[i][j]);
		}
		printf("\n");	
	}
	printf("\n\n");
	
	
	return 0;
}
