#include <stdio.h>

int main() {
    int i, mult;
    for(i = 1; i<=29; i++) {
        mult = 29*i;
        printf("29 * %d = %d\n", i, mult);
    }
    return 0;
}