// gernarate prime numbers;

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main()
{
	FILE *fd;
	if( (fd = fopen("primer2.txt", "r")) == NULL)
	{
		perror("fopen");
		exit(1);
	}

	int i = 0;
	long int sum = 0;
	//fscanf(fd, "%d", &i);
	while(i != 199999)
	{
		fscanf(fd, "%d", &i);
		sum += i;

	}
	printf("%d\n", i);
	printf("sum = %d\n", sum + 199999);			// 142913828922

	return 0;

}
