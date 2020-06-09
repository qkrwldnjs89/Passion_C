#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void MaxAndMin(int arr[], int size, int **MaxDp, int **MinDp)
{
	int i;
	for (i = 0; i < size; i++)
	{
		*MaxDp = (arr[i] > **MaxDp) ? &arr[i] : *MaxDp;
		*MinDp = (arr[i] < **MinDp) ? &arr[i] : *MinDp;
	}
}
int main(void) 
{

	int arr[5];
	int *maxPtr = &arr[0];
	int *minPtr = &arr[0];
	int i;
	
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
	
	printf("*maxPtr: %d, *minPtr: %d", *maxPtr, *minPtr);
	return 0;
}
