#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person man1, man2;
	strcpy(man1.name, "�ȼ���");
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;
	
	printf("�̸� �Է�: "); scanf("%s", man2.name);
	printf("��ȣ �Է�: "); scanf("%s", man2.phoneNum);
	printf("���� �Է�: "); scanf("%d", &man2.age);
	
	printf("***man1*** \n");
	printf("�̸�: %s \n\
��ȣ: %s \n\
����: %d \n", man1.name, man1.phoneNum, man1.age);

	printf("***man2*** \n");
	printf("�̸�: %s \n\
��ȣ: %s \n\
����: %d \n", man2.name, man2.phoneNum, man2.age);
	return 0;
}
