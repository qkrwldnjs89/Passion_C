#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Add(int num1, int num2);
void ShowAddResult(int num);
int ReadNum(void);
void HowToUseThisProg(void);
int main(void) 
{
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	return 0;
}

int Add(int num1, int num2)
{
	return num1 + num2;
}

void ShowAddResult(int num)
{
	printf("������� ���: %d \n", num);
}

int ReadNum(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void)
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���. \n");
}


