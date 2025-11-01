#include <stdio.h>

#define MEAN(x, y) (((x)+(y)) / 2)
#define ABSOLUTE(x) (x > 0? x : -x)
#define ISUPPER(x) (x >= 65 && x <= 90 ? 1 : 0)
#define UPTOLOW(x) (x+32)
#define BIGGEST3(x, y, z) (x > y ? (x > z ? x : z) : (y > z ? y : z))

int main() {
    float a,b,c;
    char d = 0, lowercased;
    printf("Enter 2 numbers, I will find it's mean. I will output the absolute of the first number.\n");
    scanf("%f %f", &a, &b);
    c = MEAN(a,b);
    printf("\nMean: %.2f", c);
    printf("\n%.2f\nCool now I want you to insert an uppercase letter, and I will return it's lowercase letter\n", ABSOLUTE(a));
    while (ISUPPER(d) == 0) {
        scanf("%c", &d);
    }
    lowercased =  UPTOLOW(d);
    printf("%c", lowercased);
    printf("\nEnter 3 numbers, I will tell you which is biggest\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("Biggest of the bunch: %.2f\n", BIGGEST3(a, b, c));
}