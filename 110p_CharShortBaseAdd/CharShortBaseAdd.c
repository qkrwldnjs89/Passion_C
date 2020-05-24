#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;
	
	printf("size of num1 & num2: %d, %d \n", sizeof(num1), sizeof(num2));
	printf("size of num3 & num4: %d, %d \n", sizeof(num3), sizeof(num4));
	
	printf("size of char add: %d \n", sizeof(num1 + num2));
	printf("size of short add: %d \n", sizeof(num3 + num4));
	// cpu가 가장 처리하기에 적합한 크기의 정수 자료형을 int로 변환.(int연산자가 더 빠르다.) 

	result1 = num1 + num2, result2 = num3 + num4;
	printf("size of result1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));
	return 0;
}
