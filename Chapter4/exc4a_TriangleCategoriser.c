#include <stdio.h>

int main() {
    int a, b, c, s1, s2, s3;
    printf("Put the lengths of 3 sides of a triangle, I will determine if it is isoceles, scalene, equilateral and/or right angle:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("Equilateral!\n");
    else if (a == b && c != a || b == c && a != c)
        printf("Isoceles!");
    else if (a != b && b != c && a != c)
        printf("Scalene!\n");
    s1 = c*c == a*a + b*b;
    s2 = b*b == a*a + c*c;
    s3 = a*a == c*c + b*b;
    if ( s1 || s2 || s3)
        printf("Right Angled Triangle!\n");
}