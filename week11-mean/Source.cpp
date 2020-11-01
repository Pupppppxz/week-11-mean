#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mean(double *a, double *b, double *c, double* d, double* e, double* f, double* g )
{
	double sum;
	sum = (*a + *b + *c + *d + *e + *f + *g)/7;
	printf("%.2lf", sum);
}
int main()
{
	int i = 0;
	double number[7];
	for(i;i<7;i++)
	{
		scanf("%lf", &number[i]);
	}
	if (number[0] != NULL && number[1] != NULL && number[2] != NULL && number[3] != NULL && number[4] != NULL && number[5] != NULL && number[6] != NULL)
	{
		mean(&number[0], &number[1], &number[2], &number[3], &number[4], &number[5], &number[6]);
	}
	
	return 0;
}