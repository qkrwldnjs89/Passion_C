#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1, num2, sum = 0;
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	printf("%d, %d \n", num1, num2); // Ȯ�� �� 
	for (; num1 <= num2; num1++)
	{
		printf("%d \n", num1); // Ȯ�� �� 
		sum += num1;
	}
	printf("��: %d", sum);
	
	return 0;
}
