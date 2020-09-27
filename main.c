#include <stdio.h>
#include <stdlib.h>
#include "primes.h"

int main(int argc, char** argv)
{
    if (argc != 2) return -1;
    unsigned long long val = (unsigned long long)atoll(argv[1]);

    unsigned long long prime = find_next_prime(val);
    printf("value: %llu\nprime: %llu\n", val, prime);

    return 0;
}
