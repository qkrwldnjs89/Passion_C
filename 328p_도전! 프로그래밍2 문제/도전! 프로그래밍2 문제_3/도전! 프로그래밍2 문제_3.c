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
		printf("�Է� %d ��°: ", i);
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
	printf("�迭 ����� ���: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);	
	}
	
	
	return 0;
}
