#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num;
	printf("1 이상 5 이하의 정수 입력: ");
	scanf("%d", &num);
	
	switch(num)
	{
		case 1:
			printf("1은 ONE \n");
			break;
		case 2:
			printf("2는 TWO \n");
			break;
		case 3:
			printf("3은 THREE \n");
			break;
		case 4:
			printf("4는 FOUR \n");
			break;
		case 5:
			printf("5는 FIVE \n");
			break;
		default:
			printf("I don't know! \n'");
			break; 
	}
	return 0;
}
