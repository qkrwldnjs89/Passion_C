#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1, num2 = 3;
	printf("Q1_정수를 입력하세요: ");
	scanf("%d", &num1);
	num1 = ~num1 + 1;
	printf("%d \n", num1);
	
	printf("Q2: \n");
	num2 = (num2 << 3) >> 2;
	printf("3 × 8 ÷ 4 = %d", num2);
	 
	return 0;
}
