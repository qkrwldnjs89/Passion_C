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
		puts("파일오픈 실패!");
		return -1;
	}
	
	printf("내용 입력: "); fgets(content, sizeof(content), stdin); RemoveBSN(content);
	fputs(content, fp);
	fclose(fp);
	
	fp = fopen("simple.txt", "rt");
	size = byteCal(fp);
	printf("파일 크기는 %d \n", size);
	return 0;
}
