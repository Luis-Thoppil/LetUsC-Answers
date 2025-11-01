#include <stdio.h>

int main() {
    int h, ts, c1, c2, c3;
    float cc;
    printf("Input steel hardness (int), carbon content (0-1 float) and tensile strength (int). I will grade it;\n");
    scanf("%d %f %d", &h, &cc, &ts);
    c1 = 50 < h;
    c2 = 0.7 < cc;
    c3 = 5600 < ts;
    if(c1 && c2 && c3)
        printf("Grade 10\n");
    else if (c1+c2+c3 == 1)
        printf("Grade 6\n");
    else if (c1+c2+c3 == 0)
        printf("Grade 5");
    else if (c1 && c2 && ! c3)
        printf("Grade 9");
    else if (c2 && c3 && ! c1)
        printf("Grade 8");
    else if (c1 && c3 & ! c2)
        printf("Grade 7");
    printf("\n");
    return 0;
}