#include <stdio.h>

typedef struct student
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
} Student;

void ShowStudentInfo(Student * sptr)
{
	printf("�л� �̸�: %s \n\
�л� ������ȣ: %s \n\
�б� �̸�: %s \n\
���� ����: %s \n\
�г�: %d \n", sptr->name, sptr->stdnum, sptr->school, sptr->major, sptr->year);
}

int main(void)
{
	Student arr[7];
	int i;
	
	for (i = 0; i < 7; i++)
	{
		printf("�̸�: "); scanf("%s", arr[i].name);
		printf("��ȣ: "); scanf("%s", arr[i].stdnum);
		printf("�б�: "); scanf("%s", arr[i].school);
		printf("����: "); scanf("%s", arr[i].major);
		printf("�г�: "); scanf("%d", &arr[i].year); 
	}
	
	for (i = 0; i < 7; i++)
		ShowStudentInfo(&arr[i]);
	return 0;
}
