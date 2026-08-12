//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main() {
    float celcius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celcius);
    fahrenheit = (celcius * 9 / 5) + 32;
      printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celcius, fahrenheit); 
    return 0;
}