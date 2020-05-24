#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num = 10;
	int * ptr1 = &num;
	// ptr1 은 num 의 주소값을 가리키고, *ptr1 은 num 을 가리킨다. 
	int * ptr2 = ptr1;
	// ptr2 에는 ptr1 이 num 의 주소값을 가리키므로 ptr2 는 num의 주소값. 
	(*ptr1)++;
	(*ptr2)++;
	
	printf("%d \n", num);
	return 0;
} 
