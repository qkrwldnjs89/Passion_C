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
	
	/* 2���� �迭�̸��� ������� ���������� �� ���
	sizeof(TYPE) * ���α��� ��ŭ�� ������ ����ȴ� */ 
	return 0;
}
