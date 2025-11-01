#include <stdio.h>
#include <math.h>

float pointstoline(int, int, int, int);
float linestoarea(float, float, float);
int inorout( int, int, int, int, int, int, int, int, float);

int main() {
    int x1, x2, x3, x4, y1, y2, y3, y4;
    float linel1, linel2, linel3, area;
    printf("Input the x, y of 3 points, I will ouput the area of the triangle created when connecting the three points with lines\nInput point 1. Input x y (integer integer):\n");
    scanf("%d %d", &x1, &y1);
    printf("Point 2:\n");
    scanf("%d %d", &x2, &y2);
    printf("Point 3:\n");
    scanf("%d %d", &x3, &y3);
    linel1 = pointstoline(x1, y1, x2, y2);
    linel2 = pointstoline(x2, y2, x3, y3);
    linel3 = pointstoline(x3, y3, x1, y1);
    area = linestoarea(linel1, linel2, linel3);
    printf("The area of the triangle: %f\n\nChoose a 4th point. I will then return whether it's in or out of the triangle. Input x y:\n", area);
    scanf("%d %d", &x4, &y4);
    inorout(x1, x2, x3, x4, y1, y2, y3, y4, area);
}

float pointstoline(int x1, int y1, int x2, int y2) {
    float linel;
    linel = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    return linel;
}

float linestoarea(float line1, float line2, float line3) {
    float s,a;
    s = (line1 + line2 + line3) / 2;
    a = sqrt(s * (s - line1) * (s - line2) * (s - line3));
    return a;
}

int inorout(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4, float area) {
    float a, a1, a2, a3;
    a1 = linestoarea(pointstoline(x4, y4, x1, y1), pointstoline(x1, y1, x2, y2), pointstoline(x2, y2, x4, y4));
    a2 = linestoarea(pointstoline(x4, y4, x2, y2), pointstoline(x2, y2, x3, y3), pointstoline(x3, y3, x4, y4));
    a3 = linestoarea(pointstoline(x4, y4, x3, y3), pointstoline(x3, y3, x1, y1), pointstoline(x1, y1, x4, y4));
    a = a1 + a2 + a3;
    if (fabs(area - a) <= 0.009) {
        printf ( "Point ( %d, %d ) is inside Triangle\n", x4, y4 );
    }
    else
        printf ( "Point ( %d, %d ) is outside Triangle\n", x4, y4 );
}