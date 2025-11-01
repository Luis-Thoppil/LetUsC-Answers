#include <stdio.h>
#include <math.h>

int main() {
    float L1, L2, G1, G2, dist;
    printf("Input Latitude and Longitude of a point, then for another and I will return distance in nautical miles: \n");
    scanf("%f %f %f %f", &L1, &G1, &L2, &G2);
    L1 = L1*3.1415/180;
    L2 = L2*3.1415/180;
    G1 = G1*3.1415/180;
    G2 = G2*3.1415/180;
    dist = 3440*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1)); // Corrected the earth's radius for nautical miles...
    printf("Distance (nm): %f\n", dist);
}

