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
	
	printf("#이름: "); fgets(man.name, sizeof(man.name), stdin);
	printf("#주민번호: "); fgets(man.personalID, sizeof(man.personalID), stdin);
	printf("#전화번호: "); fgets(man.phoneNum, sizeof(man.phoneNum), stdin);
	
	fputs("#이름: ", fp); fputs(man.name, fp);
	fputs("#주민번호: ", fp); fputs(man.personalID, fp);
	fputs("#전화번호: ", fp); fputs(man.phoneNum, fp);
	
	fclose(fp);
	return 0;
}
