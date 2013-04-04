/*
	Largest prime factor
Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
�����������ҵ�С��sqrt(num)����������,������ʼ,����С�ڵ�������
����num�����ӵĵ�һ������, ��Ϊ���.
*/

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
int isPrime(unsigned int n)
{
	int i = 2;
	int fl = floor(sqrt(n));
	for (;i < fl; i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int64_t num = 600851475143;
	printf("%" PRId64 "\n", num);
	int fl = floor(sqrt(num)) - 1;
	//int64_t fl = num - 1;
	int i, prime = 1;
	for (;fl >=2 ; fl--)
	{
		if(isPrime(fl))
		{
			if(num % fl == 0)
			{
				printf("biggest factor %d\n", fl);
				return 0;
			}
		}
	}
	return 0;
}
