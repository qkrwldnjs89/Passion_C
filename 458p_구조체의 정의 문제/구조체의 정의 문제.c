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
	printf("�̸�: "); fgets(man.name, sizeof(man.name), stdin); RemoveBSN(man.name);
	printf("�ֹε�Ϲ�ȣ: "); fgets(man.ID, sizeof(man.ID), stdin); RemoveBSN(man.ID);
	printf("�޿�����: "); scanf("%d", &man.wage);
	
	printf("�Է��Ͻ� \n\
�̸�: %s \n\
�ֹε�Ϲ�ȣ: %s \n\
�޿�����: %d \n", man.name, man.ID, man.wage);

	return 0;
}
