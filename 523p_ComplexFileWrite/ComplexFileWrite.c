#include <stdio.h>

int main(void)
{
	char name[20];
	char sex;
	int age;
	
	FILE * fp = fopen("friend.txt", "wt");
	int i;
	
	for (i = 0; i < 3; i++)
	{
		printf("�̸� ���� ���� ������ �Է�: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar(); // �Է¹����� \n �� �����ֱ� ���� 
		fprintf(fp, "%s %c %d", name, sex ,age);
	}
	fclose(fp);
	
	return 0;
}
