#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1 = 1, num2 = 2;
	printf("%d+%d=%d \n", num1, num2, num1 + num2);
	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%dX%d=%d \n", num1, num2, num1 * num2);
	printf("%d나누기%d의 몫=%d \n", num1, num2, num1/num2);
	printf("%d나누기%d의 나머지=%d \n", num1, num2, num1%num2);
	return 0;
}
