#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num = 10;
	int * ptr1 = &num;
	// ptr1 �� num �� �ּҰ��� ����Ű��, *ptr1 �� num �� ����Ų��. 
	int * ptr2 = ptr1;
	// ptr2 ���� ptr1 �� num �� �ּҰ��� ����Ű�Ƿ� ptr2 �� num�� �ּҰ�. 
	(*ptr1)++;
	(*ptr2)++;
	
	printf("%d \n", num);
	return 0;
} 
