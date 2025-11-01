#include <stdio.h>

void swapfct(int *, int *, int *);

int main() {
    int x, y, z;
    printf("Input 3 integers. Each will be assigned x, y, z variable names in this order. Then a function will run to circularly shift the values to the right so that the new xyz are values, y, z, x:\n");
    scanf("%d %d %d", &x, &y, &z);
    swapfct(&x, &y, &z);
    printf("x = %d, y = %d, z = %d\n", x, y, z);
}

void swapfct(int *x, int *y, int *z) {
    int a = *x, b = *y, c = *z;
    *x = b;
    *y = c;
    *z = a;
}