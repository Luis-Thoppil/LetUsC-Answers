#include <stdio.h>

int main() {
    int ang1, ang2, ang3, sum;
    printf("Enter 3 angles of triangle, I will output if it's a valid triangle (integers only):\n");
    scanf("%d %d %d", &ang1, &ang2, &ang3);
    sum = ang1 + ang2 + ang3;
    if (sum == 180)
        printf("The triangle is indeed valid :)\n");
    else
        printf("Not a valid triangle :(\n");
}