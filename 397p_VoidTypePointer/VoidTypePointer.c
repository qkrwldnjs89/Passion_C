#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void SoSimpleFunc(void)
{
	printf("I'm so simple \n");
}
int main(void) 
{
	int num = 20;
	void *ptr;
	
	ptr = &num; // ���� num �� �ּ� �� ����.
	printf("ptr: %p  &num: %p \n", ptr, &num);
	ptr = SoSimpleFunc;
	printf("ptr: %p  SoSimpleFunc: %p \n", ptr, SoSimpleFunc); 
	return 0;
}
