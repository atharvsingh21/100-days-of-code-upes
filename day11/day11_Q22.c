//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float cp, sp, profit, loss, profit_percent, loss_percent;

    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        profit = sp - cp;
        profit_percent = (profit / cp) * 100;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", profit_percent);
    } else if (sp < cp) {
        loss = cp - sp;
        loss_percent = (loss / cp) * 100;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", loss_percent);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}