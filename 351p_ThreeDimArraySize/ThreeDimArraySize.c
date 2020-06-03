#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr1[2][3][4];
	double arr2[5][5][5];
	
	printf("높이 2, 세로 3, 가로 4 int 형 배열: %d \n", sizeof(arr1));
	printf("높이 5, 세로 5, 가로 5 double 형 배열: %d \n", sizeof(arr2));
	return 0;
}
