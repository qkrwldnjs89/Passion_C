#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int * ptr1 = 0x0010;
	double * ptr2 = 0x0010;
	
	printf("%p %p \n", ptr1 + 1, ptr1 + 2); // 각각 4, 8 증가 
	printf("%p %p \n", ptr2 + 1, ptr2 + 2); // 각각 8, 16 증가 
	// 12행의 ptr2 + 2 의 결과가 0000020 으로 나오는 것은 16진수이기 때문. 
	printf("%p %p \n", ptr1, ptr2);
	ptr1++; // 4 증가 
	ptr2++; // 8 증가
	
	printf("%p %p \n", ptr1, ptr2); 
	
	return 0;
}
