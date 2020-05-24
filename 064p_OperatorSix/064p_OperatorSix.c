#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1 = 10, num2 = 12;
	int result1, result2, result3;
	result1 = (num1 == num2); // °ÅÁş >>> 0 
	result2 = (num1 <= num2); // Âü >>> 1 
	result3 = (num1 >= num2); // °ÅÁş >>> 0 
	printf("result1: %d \nresult2: %d \nresult3: %d \n", result1, result2, result3);
	return 0;
}
