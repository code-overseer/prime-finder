#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "primes.h"

int const prime_array[10000] = PRIME_10000;

int find_bigger_prime(int n)
{
	n |= 0x1;
	for (int i = 1; i < 10000 && prime_array[i] * prime_array[i] <= n; ++i)
	{
		char b = !(n % prime_array[i]);
		n += b * 2;
		i = b + !b * i;
	}

	return n;
}

int find_next_prime(int const n)
{
	if (n <= prime_array[0]) return prime_array[0];
	if (n >= prime_array[9999]) return find_bigger_prime(n);
	int min = 0;
	int max = 9999;
	
	while ((max - min) > 1)
	{
		int mid = (min + max) >> 1;
		char b = n < prime_array[mid];
		min = !b * mid + b * min;
		max = b * mid + !b * max;
	}

	return prime_array[max];
}

