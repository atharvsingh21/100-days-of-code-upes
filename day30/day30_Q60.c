//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n, posCount = 0, negCount = 0, zeroCount = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            posCount++;
        else if (arr[i] < 0)
            negCount++;
        else
            zeroCount++;
    }

    printf("Positive numbers: %d\n", posCount);
    printf("Negative numbers: %d\n", negCount);
    printf("Zero elements: %d\n", zeroCount);
    return 0;
}