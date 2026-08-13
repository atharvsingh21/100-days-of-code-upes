//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main() {
    int a, b;

    printf("Enter two numbers(give a space in between): ");
    scanf("%d %d", &a, &b);

    printf("After swapping: %d %d\n", b, a);
    return 0;
}