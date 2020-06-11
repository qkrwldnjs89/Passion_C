#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void SimpleFuncOne(int arr1[], int size1, int arr2[], int size2)
{
	int i;
	printf("** arr1 ** \n");
	for (i = 0; i < size1; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	
	printf("** arr2 ** \n");
	for (i = 0; i < size2; i++)
		printf("%d ", arr2[i]);
	printf("\n");
}

void SimpleFuncTwo(int (*arr3)[4], int row1, int arr4[][4], int row2)
{
	int i, j;
	
	printf("** arr3 ** \n");
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%2d ", arr3[i][j]);
		printf("\n");
	}
	printf("\n\n");
	
	printf("** arr4 ** \n");
	for (i = 0; i < row2; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", arr4[i][j]);
		printf("\n");
	}
	printf("\n\n");
}
int main(void) 
{
	int arr1[3] = {1, 2, 3};
	int arr2[4] = {1, 2, 3, 4};
	int arr3[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7 ,8},
		{9, 10, 11, 12}
	};
	int arr4[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};
	
	SimpleFuncOne(arr1, sizeof(arr1)/sizeof(int), arr2, sizeof(arr2)/sizeof(int));
	SimpleFuncTwo(arr3, sizeof(arr3)/sizeof(arr3[0]), arr4, sizeof(arr4)/sizeof(arr4[0]));
	return 0;
}
