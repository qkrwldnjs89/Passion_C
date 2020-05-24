#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	double n;
	int m;
	printf("실수를 입력하세요: ");
	scanf("%lf", &n);
	
	m = n / 10; // int 형에 double 형식을 집어넣었으므로 소숫점 아래의 값은 소실. 
	
	switch (m)
	{
		case 0:
			printf("0 이상 10 미만 \n");
			break;
		case 1:
			printf("10 이상 20 미만 \n");
			break;
		case 2:
			printf("20 이상 30 미만 \n");
			break;
		default:
			printf("범위 초과 \n");
			break;
	}
	return 0;
}
