#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr1[2][3][4];
	double arr2[5][5][5];
	
	printf("���� 2, ���� 3, ���� 4 int �� �迭: %d \n", sizeof(arr1));
	printf("���� 5, ���� 5, ���� 5 double �� �迭: %d \n", sizeof(arr2));
	return 0;
}