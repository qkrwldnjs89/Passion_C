#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void SwapInPtr(int **dp1, int **dp2)
{
	// dp �� ���� ptr �� �ּ� ���� �ǹ� 
	// *dp �� ���� ptr �� �ǹ� (num �� �ּ� ��)
	// **dp �� *ptr �� �ǹ� (num) 
	int *temp = *dp1;  
	// 11���� ���Կ����� ���ȴٴ� ���� �� ������ ������ ���������� ��ġ�ϴٴ°� 
	*dp1 = *dp2;
	*dp2 = temp;
}

int main(void)
{
	int num1 = 10, num2 = 20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1: %d, ptr2: %d \n", *ptr1, *ptr2);
	
	SwapInPtr(&ptr1, &ptr2); // ptr1 �� ptr2 �� call-by-ref �� ���� �ּ� �� ���� 
	printf("*ptr1: %d, *ptr2: %d \n", *ptr1, *ptr2);
	return 0;
}

