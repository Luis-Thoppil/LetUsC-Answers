#include <stdio.h>

int main() {
    int C, C1, D;
    printf("Initialise 2 integer variables, C and D I will interchange their contents: \n");
    scanf("%d %d", &C, &D);
    C1 = C;
    C = D;
    D = C1;
    printf("Variable C is now: %d, variable D is now: %d\n", C, D);
}