#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int lenCalc(char arr[])
{
	int len = 0, i = 0;
	while (arr[i] != '\0')
	{
		len++; i++;
	}
	return len;
} 
int main(void) 
{
	char strArr[50];
	int len, i;
	int tof = 0;
	printf("���ڿ� �Է�: ");
	scanf("%s", strArr);
	len = lenCalc(strArr);
	// printf("%d", len);
	for (i = 0; i < len / 2; i++)
	{
		tof = (strArr[i] == strArr[len - (i + 1)]) ? tof + 1 : tof;
	}
	
	if (tof == (len / 2))
		printf("ȭ�� �Դϴ�. \n");
	else
		printf("ȭ���� �ƴմϴ�. \n"); 
	return 0;
}
