#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	double rad, area;
	printf("원의 반지름 입력: ");
	scanf("%lf", &rad);
	
	area = rad * rad * 3.1415;
	printf("원의 넓이: %f \n", area); 
	return 0;
}
