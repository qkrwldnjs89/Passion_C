#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1 = 10, num2 = 20, num3 = 30;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int *ptr3 = &num3;
	
	int *ptrArr[] = {ptr1, ptr2, ptr3};
	int **dptr = ptrArr;
	// ������ �迭�� �̸��� ���� �����Ͱ� �ȴ�.
	
	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2])); 
	return 0;
}
