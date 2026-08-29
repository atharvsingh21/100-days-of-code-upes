//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    int num, complement = 0, base = 1;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    
    while (num > 0) {
        if (num % 10 == 0) {
            complement += base * 1;
        }
        num /= 10;
        base *= 10;
    }
    
    printf("1's complement = %d\n", complement);
    
    return 0;
}