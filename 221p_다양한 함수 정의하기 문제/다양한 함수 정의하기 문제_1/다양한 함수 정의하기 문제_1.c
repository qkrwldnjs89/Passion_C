#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Big(int num1, int num2, int num3);
int Small(int num1, int num2, int num3);

int main(void) 
{
	int num1, num2, num3;
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("�� ���� �� �� ���� ū ���� %d �Դϴ�. \n", Big(num1, num2, num3));
	printf("�� ���� �� �� ���� ���� ���� %d �Դϴ�. \n", Small(num1, num2, num3));
	return 0;
}

int Big(int num1, int num2, int num3)
{
	if (num1 > num2)
		return (num1 > num3) ? num1 : num3; 
	else
		return (num2 > num3) ? num2 : num3;
}

int Small(int num1, int num2, int num3)
{
	if (num1 < num2)
		return (num1 < num3) ? num1 : num3; 
	else
		return (num2 < num3) ? num2 : num3;
}
