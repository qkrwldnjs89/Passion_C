#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num;
	printf("10진수 정수를 입력하세요: ");
	scanf("%d", &num);
	
	printf("16진수로 바꾸면 %#x", num);
	return 0;
}
