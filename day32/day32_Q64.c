//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0) num = -num;

    if (num == 0) {
        freq[0] = 1;
    }

    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }

    int maxDigit = 0, maxCount = freq[0];
    for (int i = 1; i <= 9; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most times: %d (%d times)\n", maxDigit, maxCount);
    return 0;
}