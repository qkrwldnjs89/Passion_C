#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int total, num;
	printf("정수를 입력해라: ");
	scanf("%d", &num);
	
	while(num != 0)
	{
		total += num;
		printf("정수를 입력해라: ");
		scanf("%d", &num);
	}
	printf("%합계: %d", total);
	return 0;
}
