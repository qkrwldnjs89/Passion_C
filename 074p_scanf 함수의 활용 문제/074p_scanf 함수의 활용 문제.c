#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1, num2, num3, result;
	printf("Q1: \n�ΰ��� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	printf("%d + %d = %d \n%d - %d = %d \n", num1, num2, num1+ num2, num1, num2, num1 - num2);
	
	printf("Q2: \n�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d �� %d + %d = %d \n", num1, num2, num3, num1 * num2 + num3);
	
	printf("Q3: \n�ϳ��� ������ �Է��ϼ���: ");
	scanf("%d", &num1);
	printf("�Է��Ͻ� ������ ������ %d�Դϴ�. \n", num1 * num1);
	
	printf("Q4: \n�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	printf("%d �� %d �� ���� %d, �������� %d �Դϴ�. \n", num1, num2, num1 / num2, num1 % num2);
	
	printf("Q5: \n �� ���� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("(%d - %d) �� (%d + %d) �� (%d %% %d) = %d", num1, num2, num2, num3, num3, num1, result); 
	
	return 0;
}
