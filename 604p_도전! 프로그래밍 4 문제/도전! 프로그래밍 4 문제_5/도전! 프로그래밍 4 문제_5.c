#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
	FILE * fp1 = fopen(argv[1], "rt");
	FILE * fp2 = fopen(argv[2], "rt");
	bool is_same = true;
	int char1, char2;
	
	if (fp1 == NULL || fp2 == NULL)
	{
		puts("파일 오픈 실패");
		return -1;
	}
	
	while (1)
	{
		char1 = fgetc(fp1); char2 = fgetc(fp2);
		if (char1 == EOF && char2 == EOF)
			break;

		if (char1 != char2)
		{
			is_same = false;
			break;
		}	
	}
	
	fclose(fp1); fclose(fp2);
	
	if (is_same)
		puts("두 개의 파일은 일치합니다.");
	else
		puts("두 개의 파일은 다릅니다.");
	
	return 0;
}
