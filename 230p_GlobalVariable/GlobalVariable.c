#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Add(int val);
int num; // ���������� �⺻ 0���� �ʱ�ȭ. 

int main(void)
{
	printf("num: %d \n", num);
	Add(3);
	printf("num: %d \n", num);
	num++;
	printf("num: %d \n", num);
	
	return 0;
}

void Add(int val)
{
	num += val;
}
