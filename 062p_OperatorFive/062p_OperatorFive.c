#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1 = 10;
	int num2 = (num1--) + 2; // 연산 진행 후 후치-- 진행 
	printf("num1: %d, num2: %d", num1, num2);
	return 0;
}
