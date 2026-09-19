//Count characters in a string without using built-in length functions.
#include <stdio.h>
int main(void){
char s[1000];
int i;
printf("Enter a string: ");
fgets(s, sizeof(s), stdin);
for (i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
}
printf("Number of characters: %d\n", i);
return 0;
}