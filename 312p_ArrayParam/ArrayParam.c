#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ShowArayElem(int * param, int size);

int main(void) 
{
	int arr1[3] = {1, 2, 3};
	int arr2[5] = {4, 5, 6, 7, 8};
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
	return 0;
}

void ShowArayElem(int * param, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", param[i]);
	printf("\n");
}

