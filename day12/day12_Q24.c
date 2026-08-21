//Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit
#include <stdio.h>
int main() {
    int units;
    printf("Enter the number of units consumed:");
    scanf("%d", &units);
    if (units <=100){
        printf("Bill is: %d rupees", units * 5);
    } else if (units>100 && units <=200){
        printf("Bill is: %d rupees", 500 + (units - 100) * 7);
    } else if (units>200 && units <=300){
        printf("Bill is: %d rupees", 1200 + (units - 200) * 10);
    } else {
        printf("Bill is: %d rupees", 1800 + (units - 300) * 12);
    }
}
