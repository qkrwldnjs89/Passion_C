#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
	str[strlen(str) - 1] = 0;
}
struct employee
{
	char name[20];
	char ID[20];
	int wage;
};

int main(void)
{
	struct employee man;
	printf("이름: "); fgets(man.name, sizeof(man.name), stdin); RemoveBSN(man.name);
	printf("주민등록번호: "); fgets(man.ID, sizeof(man.ID), stdin); RemoveBSN(man.ID);
	printf("급여정보: "); scanf("%d", &man.wage);
	
	printf("입력하신 \n\
이름: %s \n\
주민등록번호: %s \n\
급여정보: %d \n", man.name, man.ID, man.wage);

	return 0;
}
