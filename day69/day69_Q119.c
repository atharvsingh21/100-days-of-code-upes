//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

static char seen[100001];

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated = -1;
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]]) {
            repeated = arr[i];
            break;
        }
        seen[arr[i]] = 1;
    }

    printf("Repeated element: %d\n", repeated);
    return 0;
}