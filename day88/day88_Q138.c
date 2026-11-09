#include <stdio.h>
enum Light { RED, YELLOW, GREEN };
int main() {
    const char *names[] = {"RED", "YELLOW", "GREEN"};
    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }
}