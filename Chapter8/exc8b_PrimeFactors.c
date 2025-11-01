#include <stdio.h>

void primeFactor(int);

int main() {
    int posint;
    printf("Enter a positive integer:\n");
    scanf("%d", &posint);
    primeFactor(posint);
    return 0;
}

void primeFactor(int p) {
    for(int i = 2; i < p; i++) {
        if (p % i == 0) {
            printf("%d", i);
            p = p / i;
        }
    }
}
