#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int arr[3] = {0, 1, 2};
	printf("�迭�� �̸�: %p \n", arr);
	printf("ù��° ���: %p \n", &arr[0]);
	printf("�ι�° ���: %p \n", &arr[1]);
	printf("����° ���: %p \n", &arr[2]);
	// %p �� �ּ� ���� ��¿� ���Ǵ� ���Ĺ���. ���� �ٰ� ���غ���. 
	printf("ù��° ���: %d \n", &arr[0]);
	return 0;
}
