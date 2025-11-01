#include <stdio.h>

int main()  {
    float l, b, r, ra, rp, cr, ca;
    printf("**This program outputs the area and circumference/perimeter of a rectangle and circle\nInput length and breadth of a rectangle and the radius of a circle, delimited by a space\n");
    scanf("%f %f %f", &l, &b, &r);
    ra = l*b; rp = 2.0*(l+b);
    cr = 2.0*r*3.1415926; ca = r*r*3.1415926;
    printf("\nRectange area= %f, Rectangle Perimeter= %f, Circle area = %f, Circle perimeter = %f", ra, rp, ca, cr);
}