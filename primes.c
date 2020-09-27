#include "primes.h"
#include "stdio.h"

unsigned int const prime_array[10000] = PRIME_10000;

static unsigned long long find_bigger_prime(unsigned long long n)
{
    n |= 0x1;
    for (int i = 1; i < 10000 && ((unsigned long long)prime_array[i] * (unsigned long long)prime_array[i]) <= n; ++i)
    {

        char b = !(n % prime_array[i]);
        n += b * 2;
        i = !b * i;
    }

    return n;
}

unsigned long long find_next_prime(unsigned long long const n)
{
    if (n > prime_array[9999]) return find_bigger_prime(n);
    int min = (n == prime_array[9999]) * 9999;
    int max = 9999 * (n > prime_array[0]);
    
    while ((max - min) > 1)
    {
        int mid = (min + max) >> 1;
        char b = n < prime_array[mid];
        min = !b * mid + b * min;
        max = b * mid + !b * max;
    }

    return prime_array[max];
}
