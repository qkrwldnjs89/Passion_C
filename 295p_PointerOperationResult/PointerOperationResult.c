#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int * ptr1 = 0x0010;
	double * ptr2 = 0x0010;
	
	printf("%p %p \n", ptr1 + 1, ptr1 + 2); // ���� 4, 8 ���� 
	printf("%p %p \n", ptr2 + 1, ptr2 + 2); // ���� 8, 16 ���� 
	// 12���� ptr2 + 2 �� ����� 0000020 ���� ������ ���� 16�����̱� ����. 
	printf("%p %p \n", ptr1, ptr2);
	ptr1++; // 4 ���� 
	ptr2++; // 8 ����
	
	printf("%p %p \n", ptr1, ptr2); 
	
	return 0;
}
