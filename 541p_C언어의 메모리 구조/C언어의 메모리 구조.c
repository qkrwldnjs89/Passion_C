#include <stdio.h>

void func2(int n)
{
	int num3 = n + 1;
}

void func1(int n)
{
	int num2 = n + 1;
	func2(num2);
}
int main(void)
{
	int num1 = 20;
	func1(num1);

	return 0;
}

/*
���������� �Ű������� ���ÿ� ��� ������ ���̰� �Ҹ�Ǵ��� �߽����� ����
num1 = 20 �Ҵ�
func1 �� �Ű����� n = 20 �Ҵ�
func1 �� �������� num2 = 21 �Ҵ� 
func2 �� �Ű����� n = 21 �Ҵ�
func2 �� �������� num3 = 22 �Ҵ�
func2 �� �Ű����� n = 21 �� �Ҹ�
func2 �� �������� num3 = 22 �� �Ҹ�
func1 �� �Ű����� n = 20 �Ҹ�
func1 �� �������� num2 = 21 �Ҹ�
main �Լ��� �������� num1 �� �Ҹ�
*/
