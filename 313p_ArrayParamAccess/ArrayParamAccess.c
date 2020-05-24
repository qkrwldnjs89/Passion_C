#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ShowArayElem(int * param, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", param[i]);
	printf("\n");
}

void AddArayElem(int * param, int size, int add)
{
	int i;
	for (i = 0; i < size; i++)
		param[i] += add;
}
int main(void) 
{
	int arr[3] = {1, 2, 3};
	
	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	
	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	
	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	
	return 0;
}
