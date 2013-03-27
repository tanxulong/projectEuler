/*
	fibonacci numbers
	a: Recursive
	b: iteration
*/
#include <stdio.h>
#include <stdlib.h>

void recursive(int limit)
{
	int first = 1,
		second = 1;
	//if (limit == 1)
		//return 1;

}

void iteration(int limit)
{
	int *arr = (int *)malloc(limit * sizeof(int));
	if (arr == NULL)
	{
		perror("malloc");
		exit(1);
	}

	arr[0] = arr[1] = 1;
	int i, tmp1, tmp2;
	for (i = 2; i < limit; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		printf("%d\n", arr[i]);
	}
}
int main()
{
	FILE *fd;
	fd = fopen("fib.txt", "w");
	unsigned int limit = 100;
	int *arr = (int *)malloc(limit * sizeof(int));
	if (arr == NULL)
	{
		perror("malloc");
		exit(1);
	}

	arr[0] = 0, arr[1] = 1;
	int i, sumEven = 2;
	fprintf(fd, "%d\n%d\n", arr[0], arr[1]);
	for (i = 2; i < limit; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		fprintf(fd, "%u\n", arr[i]);
	}
	return 0;
}
