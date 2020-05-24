#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1, num2, num3, result;
	printf("Q1: \n두개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	printf("%d + %d = %d \n%d - %d = %d \n", num1, num2, num1+ num2, num1, num2, num1 - num2);
	
	printf("Q2: \n세 개의 정수를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d × %d + %d = %d \n", num1, num2, num3, num1 * num2 + num3);
	
	printf("Q3: \n하나의 정수를 입력하세요: ");
	scanf("%d", &num1);
	printf("입력하신 정수의 제곱은 %d입니다. \n", num1 * num1);
	
	printf("Q4: \n두 개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	printf("%d ÷ %d 의 몫은 %d, 나머지는 %d 입니다. \n", num1, num2, num1 / num2, num1 % num2);
	
	printf("Q5: \n 세 개의 정수를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("(%d - %d) × (%d + %d) × (%d %% %d) = %d", num1, num2, num2, num3, num3, num1, result); 
	
	return 0;
}
