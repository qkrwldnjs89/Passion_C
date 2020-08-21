#include <stdio.h>

typedef struct dbshort
{
	unsigned short upper; // 2����Ʈ 
	unsigned short lower; // 2����Ʈ 
} DBShort; // �� ����ü�� 4����Ʈ 

typedef union rdbuf
{
	unsigned short arr[2];
	int iBuf; // 4����Ʈ 
	char bBuf[4]; // 4����Ʈ 
	DBShort sBuf; // 4����Ʈ 
} RDBuf; // �� ����ü�� 4����Ʈ 

int main(void)
{
	RDBuf buf;
	printf("���� �Է�: "); scanf("%d", &(buf.iBuf));
	
	printf("*** 2����Ʈ ��� 1 *** \n");
	printf("���� 2����Ʈ: %d, ���� 2����Ʈ: %d \n", buf.arr[0], buf.arr[1]);
	printf("*** 2����Ʈ ��� 2 *** \n");
	printf("���� 2����Ʈ: %u \n", (buf.sBuf).upper);
	printf("���� 2����Ʈ: %u \n", (buf.sBuf).lower);
	printf("*** 1����Ʈ *** \n");
	printf("���� 1����Ʈ �ƽ�Ű �ڵ�: %c \n", buf.bBuf[0]);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ�: %c \n", buf.bBuf[3]);	
	return 0;
}
