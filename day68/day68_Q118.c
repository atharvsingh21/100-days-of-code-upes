//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int main() {
    int n;
    printf("Enter n (size of array): ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    long long expectedSum = (long long)n * (n + 1) / 2;
    long long actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    printf("Missing number: %lld\n", expectedSum - actualSum);
    return 0;
}