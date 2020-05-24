#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr[5];
	int sum = 0, i;
	arr[0] = 1, arr[1] = 2, arr[2] = 3, arr[3] = 4, arr[4] = 5;
	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	printf("배열요소에 저장된 값의 합: %d \n", sum);
	return 0;
}
