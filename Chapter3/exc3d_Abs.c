#include <stdio.h>

int main() {
    float num;
    printf("Type number and I will about the absolute (positive) value\n");
    scanf("%f", &num);
    if (num < 0)
        num = -num;
    printf("Abs value: %f\n", num);
}