#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int sec, h, m, s;
	printf("ÃÊ(second) ÀÔ·Â: ");
	scanf("%d", &sec);
	
	h = sec / 3600;
	sec %= 3600;
	m = sec / 60;
	s = sec %= 60;
	
	printf("[h: %d, m: %d, s: %d]", h, m, s);
	return 0;
}
