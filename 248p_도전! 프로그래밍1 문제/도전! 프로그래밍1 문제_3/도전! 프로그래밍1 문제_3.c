#include <stdio.h>
#include <stdlib.h>
int gcd(int n1, int n2);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1, num2;
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	
	printf("�� ���� �ִ������� %d �Դϴ�. \n", gcd(num1, num2)); 
	return 0;
}
// gcd(a, b) = gcd(b, r)
int gcd(int n1, int n2)
{
	if (n1 % n2 == 0)
		return n2; // Ż������ 
	else
		gcd(n2, n1 % n2);  
	
}
