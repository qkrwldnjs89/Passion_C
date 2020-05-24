#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i;
	float num = 0.0;
	for (i = 0; i < 100; i++){
		num += 0.1;
	}
	printf("0.1 을 100번 더한 결과: %f", num);
	// 해당 결과는 10 이 아니라 10.000002가 나온다. 컴퓨터는 실수를 아주 가까운 값으로 처리하기 때문 
	return 0;
}
