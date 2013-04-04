/*
	template for project euler
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i, j, n,
		num,
		county,
		big = 0;

	for (i = 13; i <= 1000000; i++)
	{
		n = i;
		county = 0;
		while( n > 1)
		{
			//printf("%d\t", n);
			county++;
			if (n % 2 == 0)
				n /= 2;
			else
				n = 3 * n + 1;
		}
		if (county >= big)
		{
			big = county + 1;
			num = i;
		}
		//printf("1");
		//printf("\n");
	}
	printf("%d %d\n", num, big);
	return 0;
}
