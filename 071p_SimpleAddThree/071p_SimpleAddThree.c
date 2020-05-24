#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1, num2;
	int result;
	printf("정수 one: ");
	scanf("%d", &num1);
	printf("정수 two: ");
	scanf("%d", &num2);
	
	result = num1 + num2;
	printf("%d + %d = %d", num1, num2, result);
	return 0;
}
