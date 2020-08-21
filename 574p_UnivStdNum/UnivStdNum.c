#include <stdio.h>
// #define STNUM1(Y, S, P) YSP -> 에러 
// #define STNUM2(Y, S, P) Y S P -> 에러 
#define STNUM3(Y, S, P) ((Y) * 100000 + (S) * 1000 + (P))
#define STNUM4(Y, S, P) Y ## S ## P
 
int main(void)
{
	// printf("학번: %d \n", STNUM1(10, 65, 175));
	// printf("학번: %d \n", STNUM2(10, 65, 175));
	printf("학번: %d \n", STNUM3(10, 65, 175));
	printf("학번: %d \n", STNUM4(10, 65, 175));
	return 0;
}
