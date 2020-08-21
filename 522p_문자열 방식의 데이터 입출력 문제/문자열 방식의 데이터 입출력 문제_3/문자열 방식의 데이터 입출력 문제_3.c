#include <stdio.h>

int main(void)
{
	char str[20];
	FILE * fp = fopen("mystory.txt", "rt");
	
	if (fp == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	
	while (fgets(str, sizeof(str), fp) != NULL)
	{
		printf("%s", str);
	}
	
	if (feof(fp))
		puts("출력 완료");
	else
		puts("출력 실패");
	return 0;
}
