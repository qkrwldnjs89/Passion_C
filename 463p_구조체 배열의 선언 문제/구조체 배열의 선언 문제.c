#include <stdio.h>

struct employee
{
	char name[20];
	char phoneNum[20];
	int age;
};
int main(void)
{
	struct employee arr[3];
	int i;
	
	for (i = 0; i < 3; i++)
	{
		printf("*** %d ��° �Է� *** \n", i + 1);
		printf("�̸�: ");
		scanf("%s", arr[i].name);
		printf("��ȭ��ȣ: ");
		scanf("%s", arr[i].phoneNum);
		printf("����: ");
		scanf("%d", &arr[i].age);	
	}
	
	for (i = 0; i < 3; i++)
	{
		printf("*** %d ��° ��� *** \n", i + 1);
		printf("�̸�: %s \n\
��ȭ��ȣ: %s \n\
����: %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
	}
	return 0;
}
