#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr2d[3][3];
	printf("%d \n", arr2d);
	printf("%d \n", arr2d[0]);
	printf("%d \n\n", &arr2d[0][0]);
	// �迭�� ù��° ����� �ּ� ��   
	printf("%d \n", arr2d[1]);
	printf("%d \n\n", &arr2d[1][0]);
	// �迭�� �ι�° ���� ù��° ����� �ּ� �� 
	printf("%d \n", arr2d[2]);
	printf("%d \n\n", &arr2d[2][0]);
	// �迭�� ����° ���� ù��° ����� �ּ� �� 
	printf("sizeof(arr2d): %d \n", sizeof(arr2d));
	// ��ü �迭�� ������ 
	printf("sizeof(arr2d[0]): %d \n", sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]): %d \n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]): %d \n", sizeof(arr2d[2]));
	// �� ���� ������ 
	return 0;
}
