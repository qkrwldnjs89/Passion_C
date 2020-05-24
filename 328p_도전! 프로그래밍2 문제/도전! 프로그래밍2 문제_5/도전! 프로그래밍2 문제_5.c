#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void DesSort(int arr[], int size);
int main(void) 
{
	int numArr[7];
	int i;
	for (i = 0; i < 7; i++)
	{
		printf("입력 %d 번째: ", i);
		scanf("%d", &numArr[i]);
	}
	
	DesSort(numArr, sizeof(numArr) / sizeof(int));
	
	for(i = 0; i < 7; i++)
	{
		printf("%d ", numArr[i]);
	}
	return 0;
}

void DesSort(int arr[], int size)
{
	int i, j;
	for (j = 0; j < (size - 1); j++)
	{
		for (i = 0; i < size - (j + 1); i++)
		{
			if (arr[i] < arr[i + 1])
			{
				int tmp;
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
	
	
}
