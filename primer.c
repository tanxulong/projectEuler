// gernarate prime numbers;

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main()
{
	FILE *fd;
	if( (fd = fopen("primer.txt", "w")) == NULL)
	{
		perror("fopen");
		exit(1);
	}

	int i, j, fl, prime = 1;
	for (i = 2; i < INT_MAX; i++)
	{
		printf("%d\n", i);
		fl = floor(sqrt(i));
		for (j = 2; j <= fl; j++)
		{
			if(i % j == 0)
				prime = 0;
		}
		if (prime)
			fprintf(fd, "%d\n", i);
			printf("%d\n", i);
		prime = 1;
	}
}

void selection()
{

}
