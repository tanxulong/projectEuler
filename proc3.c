/*
	template for project euler
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fd;
	if( (fd = fopen("primer.txt", "r")) == NULL)
	{
		perror("fopen");
		exit(1);
	}
	while(fd != EOF)
	{

	}
	return 0;
}
