#include <stdio.h>
#define COMPAREBIG(A, B) ( ((A) > (B)) ? (A) : (B) )
 
int main(void)
{
	int num1, num2;
	printf("�� ���� ���� �Է�: "); scanf("%d %d", &num1, &num2);
	printf("�� ū ���� %d \n", COMPAREBIG(num1, num2));
	return 0;
}
