//Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, key, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);
    printf("Enter position (1-based): ");
    scanf("%d", &pos);

    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = key;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}