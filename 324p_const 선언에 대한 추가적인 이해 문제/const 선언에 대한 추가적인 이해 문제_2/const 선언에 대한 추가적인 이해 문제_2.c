#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ShowData(const int * ptr)
{
	int * rptr = ptr;
	printf("%d \n", *rptr);
	*rptr = 20;
}
int main(void) 
{
	int num = 10;
	int * ptr = &num;
	ShowData(ptr);
	printf("%d \n", *ptr);
	return 0;
}

/*
�ش� �ڵ忡�� ������ ���� ptr �� ������� const ������ �Ͽ��µ�
�̰��� ������ ���� ptr �� �̿��Ͽ� 
������ ������ ����Ű�� ����� �ٲ��� ���ϰ� �ϱ� �����̴�.
������
int * rptr = ptr;
�̶�� �ٿ��� 
rptr �� �̿��Ͽ� *ptr�� ������ �� �ְ� �Ǿ����Ƿ� 
�Ű����� ���� �� ���� const �� ������� ���ϰ� �ȴ�.
�̷� ���� ���ǹ��� const ������ ���� ���� �����̴�.
*/ 
