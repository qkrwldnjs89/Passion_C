#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int x1, x2, y1, y2;
	printf("좌 상단의 x, y 좌표를 입력하세요: ");
	scanf("%d %d", &x1, &y1);
	printf("우 하단의 x, y 좌표를 입력하세요: ");
	scanf("%d %d", &x2, &y2);
	printf("두 점이 이루는 직사각형의 넓이는 %d 입니다.", (x2 - x1) * (y2 - y1));
	return 0;
}
