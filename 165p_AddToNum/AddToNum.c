#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int sum = 0, num, i;
	
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);
	
	for (i = 0; i <= num; i++)
	{
		sum += i;
	}
	printf("0���� �Է��Ͻ� ���ڱ����� ����: %d", sum);
	return 0;
}
