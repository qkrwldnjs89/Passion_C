#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num = 15;
	
	int result1 = num << 1; // num은 그대로이다.
	int result2 = num << 2;
	int result3 = num << 3;
	
	printf("한 칸 이동: %d \n두 칸 이동: %d \n세 칸 이동: %d \n", result1, result2, result3);
	 
	return 0;
}
