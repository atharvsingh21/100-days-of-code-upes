//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
// x(x+1)/2 = n(n+1)/2 − x(x−1)/2
// x(x+1)/2 + x(x−1)/2 = n(n+1)/2
// x · [(x+1)+(x−1)] / 2 = n(n+1)/2
// x · 2x / 2 = n(n+1)/2
// x² = n(n+1)/2
// x = √(n(n+1)/2)

#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    printf("Enter a positive integer n: ");
    scanf("%lld", &n);

    long long total = n * (n + 1) / 2;
    long long x = (long long)sqrt((double)total);

    // Adjust for floating-point rounding, then verify
    while (x * x > total) x--;
    while ((x + 1) * (x + 1) <= total) x++;

    if (x * x == total && x >= 1 && x <= n)
        printf("Pivot integer: %lld\n", x);
    else
        printf("-1\n");

    return 0;
}