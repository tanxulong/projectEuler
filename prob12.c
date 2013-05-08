/*
	Highly divisible triangular number
Problem 12
The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

 1: 1
 3: 1,3
 6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fd;
	if((fd = fopen("pro12.txt", "w")) == NULL)
	{
		perror("fopen");
		exit(1);
	}
	int i, counts = 1, sum  = 0, n = 1;		// sum = n*(n+1)/2
	while (counts < 500)
	{
		sum += n++;
		counts = 0;
		for(i = 1; i <= sum; i++)
		{
			if( sum % i == 0)
			{
				counts++;
			}
		}
		fprintf(fd, "%d %d\n", sum, counts);
		//printf("%d\n", counts);
	}
	printf("%d %d\n", sum, counts);
	return 0;
}
