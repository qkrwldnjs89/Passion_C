#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void SwapInPtr(int *p1, int *p2)
{
	int *temp = p1;
	p1 = p2;
	p2 = temp;
}
int main(void) 
{
	int num1 = 10, num2 = 20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1: %d, *ptr2: %d \n", *ptr1, *ptr2);
	
	SwapInPtr(ptr1, ptr2);
	// �Լ��� �Ű������� p1,2 �� num1,2 �� �����ϴ� ������ ptr �� �������� ����. 
	/* 
	p1 �� ptr1 �� call-by-value, num1 �� call-by-ref.
	p2 �� ptr2 �� call-by-value, num2 �� call-by-ref.
	*/ 
	printf("*ptr1: %d, *ptr2: %d \n", *ptr1, *ptr2);
	return 0;
}
