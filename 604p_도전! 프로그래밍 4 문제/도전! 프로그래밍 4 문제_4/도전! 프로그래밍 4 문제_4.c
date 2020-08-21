#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE * fp = fopen(argv[1], "rt");
	char wrd[50];
	int ret;
	int ACnt = 0, PCnt = 0;
	
	if (fp == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}
	
	while (1)
	{
		ret = fscanf(fp, "%s", wrd);
		if (ret == EOF)
			break;
		
		if (wrd[0] == 'A')
			ACnt++;
		else if (wrd[0] == 'P')
			PCnt++;
	}
	
	fclose(fp);
	
	printf("A �� �����ϴ� �ܾ��� ��: %d \n", ACnt);
	printf("P �� �����ϴ� �ܾ��� �� : %d \n", PCnt);
}
