#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	
	printf("���� ch�� ũ��: %d \n", sizeof(ch));
	printf("���� inum�� ũ��: %d \n", sizeof(inum));
	printf("���� dnum�� ũ��: %d \n", sizeof(dnum));

	printf("char�� ũ��: %d \n", sizeof(char));
	printf("int�� ũ��: %d \n", sizeof(int));
	printf("long�� ũ��: %d \n", sizeof(long));
	printf("long long�� ũ��: %d \n", sizeof(long long));
	printf("float�� ũ��: %d \n", sizeof(float));
	printf("double�� ũ��: %d \n", sizeof(double));
	return 0;
}
