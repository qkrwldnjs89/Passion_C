#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ShowOdds(int arr[], int size);
void ShowEven(int arr[], int size);
int main(void) 
{
	int arr[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("�Է� %d ��°: ", i + 1);
		scanf("%d", &arr[i]);
	}
	ShowOdds(arr, sizeof(arr) / sizeof(int));
	ShowEven(arr, sizeof(arr) / sizeof(int));
	
	
	return 0;
}

void ShowOdds(int arr[], int size)
{
	int i;
	printf("Ȧ�� ���: ");
	for (i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
			printf("%d ", arr[i]);
	}
}
void ShowEven(int arr[], int size)
{
	int i;
	printf("¦�� ���: ");
	for (i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
}
