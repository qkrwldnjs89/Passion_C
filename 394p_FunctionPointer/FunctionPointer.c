#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d \n", n1, n2, n1 + n2);
}

void ShowString(char * str)
{
	printf("%s \n", str);
}

int main(void) 
{
	char * str = "Function Pointer";
	int num1 = 10, num2 = 20;
	
	void (*fptr1)(int, int) = SimpleAdder;
	void (*fptr2)(char*) = ShowString;
	
	/* �Լ� ������ ������ ���� ȣ�� */
	fptr1(num1, num2);
	fptr2(str); 
	
	return 0;
}
