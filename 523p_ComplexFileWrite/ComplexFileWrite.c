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
		printf("이름 성별 나이 순으로 입력: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar(); // 입력버퍼의 \n 을 없애주기 위함 
		fprintf(fp, "%s %c %d", name, sex ,age);
	}
	fclose(fp);
	
	return 0;
}
