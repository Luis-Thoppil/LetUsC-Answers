#include <stdio.h>

int main() {
    float r, g, b, w, c, m, y, k;
    printf("Put R G B (integer values 0-255) in and I will convert to CMYK:\n ");
    scanf("%f %f %f", &r, &g, &b);
    w = ((r >= g ? (r >= b ? r : b) : (g >= b? g : b))) / 255; // max R G B
    c = 100*(w - (r / 255)) / w; // 100x to get as a % rather then decimal.
    m = 100*(w - (g / 255)) / w;
    y = 100*(w - (b / 255)) / w;
    k = 100*(1 - w);
    printf("CMYK: %f %f %f %f\n", c, m, y, k);
}