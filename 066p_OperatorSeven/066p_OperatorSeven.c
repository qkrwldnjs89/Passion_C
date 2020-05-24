#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1 = 10, num2 = 12;
	int result1, result2, result3;
	result1 = (num1 == 10 && num2 == 12); // 참 && 참 >>> 참 
	result2 = (num1 < 12 || num2 > 12); // 참 || 거짓 >>> 참 
	result3 = (!num1); // !참 >>> 거짓 (0 이 아닌 값은 1으로 간주) 
	printf("result1: %d \nresult2: %d \nresult3: %d", result1, result2, result3);
	return 0;
}
