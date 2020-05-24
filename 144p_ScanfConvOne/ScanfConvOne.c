#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf("%d %o %x", &num1, &num2, &num3);
	
	printf("입력된 세 개의 정수를 10진수로 출력: %d %d %d \n", num1, num2, num3);
	return 0;
}
