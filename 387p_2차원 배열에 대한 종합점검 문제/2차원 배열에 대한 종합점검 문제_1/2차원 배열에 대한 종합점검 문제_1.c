#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int a[5]; // int *p = a;
int* a[5]; // int **p = a;
int a[3][5]; // int (*p)[5] = a;	-> 배열 포인터 
int* a[3][5]; // int*(*p)[5] = a;   -> 배열 포인터의 포인터 
int*(*a[3])[5]; // int*(**p)[5] = a;
*/
int main(void)
{
	int numArr[15];
	int * arr1[5] = {
	&numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]
	};
	int * arr2[3][5] = {
		{&numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]},
		{&numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]},
		{&numArr[10], &numArr[11], &numArr[12], &numArr[13], &numArr[14]}
	};
	int i;
	
	// arr1 과 arr2 를 받을 수 있는 포인터 변수를 선언해보자
	int **ptr1;
	int *(*ptr2)[5];
	// (*ptr2)[5] 가 이차원 배열의 포인터고 이것의 포인터가*(*ptr2)[5]
	ptr1 = arr1;
	printf("%d %d %d %d %d \n\n\n", ptr1[0], ptr1[1], ptr1[2], ptr1[3], ptr1[4]); 
	ptr2 = arr2;
	for (i = 0; i < 3; i++)
		printf("%d %d %d %d %d \n", ptr2[i][0], ptr2[i][1], ptr2[i][2], ptr2[i][3], ptr2[i][4]);
	return 0;
}
