//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main() {
    int i,j,swap;
    printf("Enter two numbers(give a space between them): ");
    scanf("%d %d", &i, &j);
    swap = i;
    i = j;
    j = swap;
    printf("After swap: %d %d\n", i, j);
    return 0;
}