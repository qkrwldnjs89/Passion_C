#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr[5] = {1, 2, 3, 4, 5};
	int * ptr = &arr[4];
	int sum = 0, i;
	
	for (i = 0; i < 5; i++)
	{
		sum += *(ptr--);
	}
	printf("sum: %d", sum);
	return 0;
}
