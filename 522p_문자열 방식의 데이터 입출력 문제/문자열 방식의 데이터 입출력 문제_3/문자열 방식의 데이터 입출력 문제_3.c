#include <stdio.h>

int main(void)
{
	char str[20];
	FILE * fp = fopen("mystory.txt", "rt");
	
	if (fp == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}
	
	while (fgets(str, sizeof(str), fp) != NULL)
	{
		printf("%s", str);
	}
	
	if (feof(fp))
		puts("��� �Ϸ�");
	else
		puts("��� ����");
	return 0;
}
