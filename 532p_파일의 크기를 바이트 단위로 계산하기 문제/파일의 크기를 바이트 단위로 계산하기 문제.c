#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
	str[strlen(str) - 1] = 0;
}

int byteCal(FILE * stream)
{
	int fpos, len;
	fpos = ftell(stream);
	
	fseek(stream, 0, SEEK_END);
	len = ftell(stream);
	
	fseek(stream, fpos, SEEK_SET);
	return len;
}

int main(void)
{
	char content[20];
	int size;
	FILE * fp = fopen("simple.txt", "wt");	
	if (fp == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}
	
	printf("���� �Է�: "); fgets(content, sizeof(content), stdin); RemoveBSN(content);
	fputs(content, fp);
	fclose(fp);
	
	fp = fopen("simple.txt", "rt");
	size = byteCal(fp);
	printf("���� ũ��� %d \n", size);
	return 0;
}
