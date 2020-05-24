#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1, num2, num3;
	int result;
	
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d", num1, num2, num3, result);
	return 0;
}
