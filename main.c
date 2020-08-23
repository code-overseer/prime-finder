#include <stdio.h>
#include <stdlib.h>
#include "primes.h"

int main(int argc, char** argv)
{
    if (argc != 2) return -1;
    int val = atoi(argv[1]);

    int prime = find_next_prime(val);
    printf("value: %i\nprime: %i\n", val, prime);

    return 0;
}