//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit, numDigits, tempNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for later use
    tempNum = num;

    // Find the last digit
    lastDigit = num % 10;

    // Find the first digit and the number of digits
    numDigits = 0;
    while (tempNum != 0) {
        firstDigit = tempNum % 10;
        tempNum /= 10;
        numDigits++;
    }

    // Swap the first and last digits
    int swappedNum = (lastDigit * pow(10, numDigits - 1)) + (num / 10) % (int)pow(10, numDigits - 1) * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}