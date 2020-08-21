#include <stdio.h>

typedef struct dbshort
{
	unsigned short upper; // 2바이트 
	unsigned short lower; // 2바이트 
} DBShort; // 이 구조체는 4바이트 

typedef union rdbuf
{
	unsigned short arr[2];
	int iBuf; // 4바이트 
	char bBuf[4]; // 4바이트 
	DBShort sBuf; // 4바이트 
} RDBuf; // 이 공용체는 4바이트 

int main(void)
{
	RDBuf buf;
	printf("정수 입력: "); scanf("%d", &(buf.iBuf));
	
	printf("*** 2바이트 방식 1 *** \n");
	printf("상위 2바이트: %d, 하위 2바이트: %d \n", buf.arr[0], buf.arr[1]);
	printf("*** 2바이트 방식 2 *** \n");
	printf("상위 2바이트: %u \n", (buf.sBuf).upper);
	printf("하위 2바이트: %u \n", (buf.sBuf).lower);
	printf("*** 1바이트 *** \n");
	printf("상위 1바이트 아스키 코드: %c \n", buf.bBuf[0]);
	printf("하위 1바이트 아스키 코드: %c \n", buf.bBuf[3]);	
	return 0;
}
