/*
	template for project euler
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fd;
	if ((fd = fopen("prob4.txt", "w")) == NULL)
	{
		perror("fopen");
		exit(1);
	}
	int arr[6];
	int big, product;
	int i, j;
	for (i = 999; i > 101; i--)
	{
		for (j = 999; j > 101; j--)
		{
			product = i * j;
			big = product;
			arr[5] = product % 10;
			product /= 10;
			arr[4] = product % 10;
			product /= 10;
			arr[3] = product % 10;
			product /= 10;
			arr[2] = product % 10;
			product /= 10;
			arr[1] = product % 10;
			product /= 10;
			arr[0] = product % 10;
			if ( (arr[0] == arr[5]) && (arr[1] == arr[4]) && (arr[2] == arr[3]))
			{
				printf("product %d\n", big);
				fprintf(fd,"product %d\n", big);
			}
		}
	}
	return 0;
}
