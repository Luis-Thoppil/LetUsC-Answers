#include <stdio.h>
#include <math.h>

int main() {
    float x, y, r, phi, phid;
    printf("Enter x and y coordinates delimited with a space in between, and I will return you the polar coordinates: \n");
    scanf("%f %f", &x, &y);
    r = sqrt(x*x + y*y); 
    phi = atan2(y,x);
    phid = phi*180/3.1415;
    printf("Radius: %f, Polar Angle (in radians): %f, Polar Angle (in degrees): %f \n", r, phi, phid);
}

