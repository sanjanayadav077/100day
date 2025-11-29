//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>
#include <math.h>
#include <stdint.h>
int main(void) {
    unsigned long long n;
    if (scanf("%llu", &n) != 1 || n == 0) return 0;
    unsigned long long S = n * (n + 1) / 2ULL;
    unsigned long long x = (unsigned long long) floor(sqrt((long double)S) + 0.5L);
    if ((__int128)x * (__int128)x == (__int128)S)
        printf("%llu\n", x);
    else
        printf("-1\n");

    return 0;
}