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
	printf("학생 이름: %s \n\
학생 고유번호: %s \n\
학교 이름: %s \n\
선택 전공: %s \n\
학년: %d \n", sptr->name, sptr->stdnum, sptr->school, sptr->major, sptr->year);
}

int main(void)
{
	Student arr[7];
	int i;
	
	for (i = 0; i < 7; i++)
	{
		printf("이름: "); scanf("%s", arr[i].name);
		printf("번호: "); scanf("%s", arr[i].stdnum);
		printf("학교: "); scanf("%s", arr[i].school);
		printf("전공: "); scanf("%s", arr[i].major);
		printf("학년: "); scanf("%d", &arr[i].year); 
	}
	
	for (i = 0; i < 7; i++)
		ShowStudentInfo(&arr[i]);
	return 0;
}
