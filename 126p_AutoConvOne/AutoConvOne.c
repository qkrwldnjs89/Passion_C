#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3; // char 자료형의 크기가 1바이트 이므로 값의 손실이 일어난다.
	/* 4바이트의 int가
	00000000 00000000 00000000 10000001 에서
	1바이트의 char 로 바뀌면서
	10000001이 되기 때문에 MSB 가 1이되어 음수표현으로 바뀌게 된다 */ 
	printf("정수 245를 실수로: %f \n", num1);
	printf("실수 3.1415를 정수로: %d \n", num2);
	printf("큰 정수 129를 작은 정수로: %d \n", ch); 
	return 0;
}
