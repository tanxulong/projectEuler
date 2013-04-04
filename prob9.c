/*
	template for project euler
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	for(c = 5; c < 995; c++)
	{
		for(b = 4; b < 995; b++)
		{
			for(a = 3; a < 995; a++)
			{
				if((a*a + b*b == c*c) && ((a + b +c) == 1000) && (a < b) && (b < c))
				{
					printf("%d %d %d\n", a, b, c);
					printf("%d\n", a*b*c);
					exit(0);
				}
			}
		}
	}
	return 0;
}
