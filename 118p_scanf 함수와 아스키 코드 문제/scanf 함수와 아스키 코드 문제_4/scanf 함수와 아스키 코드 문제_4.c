#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1;
	printf("한 개의 정수를 입력하세요: ");
	scanf("%d", &num1);
	printf("입력하신 숫자의 ASCII CODE 는 %c 입니다. \n", num1);
	return 0;
}
