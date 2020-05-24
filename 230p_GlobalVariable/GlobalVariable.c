#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Add(int val);
int num; // 전역변수는 기본 0으로 초기화. 

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
