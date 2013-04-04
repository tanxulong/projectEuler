/*
	template for project euler
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 100;
	int squreSum  = n*(n+1)*(2*n+1)/6;
	int sumSqure  = (n*(n+1)/2)*(n*(n+1)/2);
	printf("difference : %d\n",  sumSqure - squreSum);
	printf("difference : %d\n",  squreSum - sumSqure);

	return 0;
}
