#include <stdio.h>
#include <math.h>

int main() {
    float xc, yc, x, y, r, dist;
    printf("Input the x and y cooridnates of the circle centre, and the radius:\n");
    scanf("%f %f %f", &xc, &yc, &r);
    printf("Now input x and y of a point. I will tell you whether it lay inside, outside or on the circle\n");
    scanf("%f %f", &x, &y);
    dist = sqrtf(powf((xc - x), 2) + powf((yc - y), 2)); // no point in square rooting. Just compare dist squared and r squared, saves on compute.
    if (dist == r) {
        printf("Point is on the circle circumference\n");
    }
    else if (dist < r)
    {
        printf("Point lies inside the circle\n");
    }
    else {
        printf("Point lies outside of the circle\n");
    }
    return 0;
}