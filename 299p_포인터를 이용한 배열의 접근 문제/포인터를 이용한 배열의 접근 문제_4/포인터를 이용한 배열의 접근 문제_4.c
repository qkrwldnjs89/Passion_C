#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int * ptr1 = &arr[0], * ptr2 = &arr[5];
	int i;
	
	for (i = 0; i < 3; i++)
	{
		int tmp;
		tmp = *(ptr1 + i);
		*(ptr1 + i) = *(ptr2 - i);
		*(ptr2 - i) = tmp;
	}
	
	for (i = 0; i < 6; i++)
	{
		printf("arr[%d] = %d \n", i, arr[i]);
	}
	return 0;
}
