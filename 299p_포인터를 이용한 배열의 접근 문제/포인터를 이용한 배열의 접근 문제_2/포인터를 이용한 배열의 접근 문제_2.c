#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr[5] = {1, 2, 3, 4, 5};
	int * ptr = arr;
	int i;
	
	for (i = 0; i < 5; i++)
	{
		*(ptr + i) += 2;
		printf("arr[%d]: %d \n", i, *(ptr + i));
	}
	
	return 0;
}
