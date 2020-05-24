#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int cnt;
	for (cnt = 0; cnt < 3; cnt++)
	{
		int num = 0;
		num++;
		printf("%d 번쨰 반복, 지역변수 num 은 %d. \n", cnt + 1, num);
	}
	
	if (cnt == 3)
	{
		int num = 7;
		num++;
		printf("if 문 내에 존재하는 지역변수 num 은 %d. \n", num);
	}
	return 0;
}
