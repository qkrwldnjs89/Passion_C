#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr1[3][2];
	int arr2[2][3];
	
	printf("arr1: %p \n", arr1);
	printf("arr1 + 1: %p \n", arr1 + 1);
	printf("arr1 + 2: %p \n", arr1 + 2);
	
	printf("arr2: %p \n", arr2);
	printf("arr2 + 1: %p \n", arr2 + 1);
	
	/* 2차원 배열이름을 대상으로 증감연산을 할 경우
	sizeof(TYPE) * 가로길이 만큼의 연산이 수행된다 */ 
	return 0;
}
