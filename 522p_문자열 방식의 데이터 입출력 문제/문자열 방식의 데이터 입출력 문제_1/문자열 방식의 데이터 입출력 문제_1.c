#include <stdio.h>

typedef struct person
{
	char name[20];
	char personalID[20];
	char phoneNum[20];
} Person;

int main(void)
{
	Person man;
	FILE * fp = fopen("mystory.txt", "wt");
	
	printf("#�̸�: "); fgets(man.name, sizeof(man.name), stdin);
	printf("#�ֹι�ȣ: "); fgets(man.personalID, sizeof(man.personalID), stdin);
	printf("#��ȭ��ȣ: "); fgets(man.phoneNum, sizeof(man.phoneNum), stdin);
	
	fputs("#�̸�: ", fp); fputs(man.name, fp);
	fputs("#�ֹι�ȣ: ", fp); fputs(man.personalID, fp);
	fputs("#��ȭ��ȣ: ", fp); fputs(man.phoneNum, fp);
	
	fclose(fp);
	return 0;
}
