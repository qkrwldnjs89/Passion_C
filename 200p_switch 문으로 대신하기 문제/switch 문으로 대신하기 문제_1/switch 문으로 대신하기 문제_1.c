#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	double n;
	int val = (n >= 0 && n < 10) ? 1 : (n >= 10 && n < 20) ? 2 : (n >= 20 && n < 30) ? 3 : 4;
	printf("n을 입력하세요: ");
	scanf("%lf", &n);
	
	switch (val)
	{
		case 1:
			printf("0 이상 10 미만 \n");
			break;
		case 2:
			printf("10 이상 20 미만 \n");
			break;
		case 3:
			printf("20 이상 30 미만 \n");
			break;
		case 4:
			printf("30 이상 \n");
			break;
	}
	
	return 0;
}
