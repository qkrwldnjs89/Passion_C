#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num = -16; // 11111111 11111111 11111111 11110000
	printf("2칸 오른쪽 이동의 결과: %d\n", num >> 2); // -4
	printf("3칸 오른쪽 이동의 결과: %d\n", num >> 3); // -2
	return 0;
}

/*
이로 인해 나의 컴퓨터의 cpu는 오른쪽 이동 시
음수값을 유지하기 위하여 왼쪽 칸에 1을 채워넣음을 알 수있다.
*/
 
