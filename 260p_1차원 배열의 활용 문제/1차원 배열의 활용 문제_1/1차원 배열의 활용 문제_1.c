#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr[5], i, sum = 0, largest, smallest;
	
	for (i = 0; i < 5; i++)
	{
		printf("%d ��° ���� �Է�: ", i + 1);
		scanf("%d", &arr[i]);
		// �迭�� ������� scanf ���� ������ ������ & �� �ٿ��ش�. 
		if (i == 0) largest = smallest = arr[0];
		
		largest = (arr[i] > largest) ? arr[i] : largest;
		smallest = (arr[i] < smallest) ? arr[i] : smallest;
		sum += arr[i];
	}
	printf("�ִ��� %d \n", largest);
	printf("�ּڰ��� %d \n", smallest);
	printf("���� %d \n", sum);
	return 0;
}
