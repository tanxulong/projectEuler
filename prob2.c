/*
	Even Fibonacci numbers
	Problem 2
	Each new term in the Fibonacci sequence is generated
	by adding the previous two terms. By starting with 1 and 2,
	the first 10 terms will be:

	1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

	By considering the terms in the Fibonacci sequence whose
	values do not exceed four million, find the sum of the even-valued terms.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int limit = 100;
	int *arr = (int *)malloc(limit * sizeof(int));
	if (arr == NULL)
	{
		perror("malloc");
		exit(1);
	}

	arr[0] = 1,
	arr[1] = 2;

	int i, sumEven = 2;
	for (i = 2; i < limit; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		if (arr[i] >= 4000000)
			break;
		if (arr[i] % 2 == 0)
			sumEven += arr[i];
	}

	printf("sumEven = %d\n", sumEven);
	return 0;
}
