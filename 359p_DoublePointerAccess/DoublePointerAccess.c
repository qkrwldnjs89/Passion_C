#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	double num = 3.14;
	double *ptr = &num;
	double **dptr = &ptr;
	double *ptr2;
	
	printf("%9p %9p \n", ptr, *dptr);
	printf("%9p %9p \n", num, **dptr);
	ptr2 = *dptr; // ptr2 = ptr 과 같은 문장.
	*ptr2 = 10.99; // num 의 값 변경. 
	printf("%9g %9g \n", num, **dptr); 
	return 0;
}
