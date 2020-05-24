#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr[10];
	int i;
	int j = 0, k = 9;
	for (i = 0; i < 10; i++)
	{
		int num = 0; 
		printf("입력 %d 번째: ", i);
		scanf("%d", &num);
		if (num % 2 == 1)
		{
			arr[j] = num; j++;
		}
		else
		{
			arr[k] = num; k--;
		}
	}
	printf("배열 요소의 출력: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);	
	}
	
	
	return 0;
}
