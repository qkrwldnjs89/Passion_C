#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	unsigned int num = 0, input;
	printf("정수 입력: ");
	scanf("%d", &input);
	
	while(num < input)
	{
	printf("Hello world! \n");
	num++;	
	} 
	
	return 0;
}
