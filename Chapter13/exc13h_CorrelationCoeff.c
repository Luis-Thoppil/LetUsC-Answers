#include <stdio.h>
#include <math.h>

int main() {
    int i, n = 7;
    float r, sumx = 0, sumy = 0, ssumx = 0, ssumy = 0, sumxy = 0, x[7] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29}, y[7] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07};
    for (i = 0; i < n; i++) {
        sumx = sumx + x[i];
        sumy= sumy + y[i];
        ssumx = ssumx + x[i]*x[i];
        ssumy = ssumy + y[i]*y[i];
        sumxy = sumxy + x[i]*y[i];
    }
    r = (n*sumxy - sumx*sumy) / sqrt((n*ssumx - (sumx*sumx))*(n*ssumy - (sumy*sumy))); // Textbook missing the n at the top!
    printf("\nCorrelation Coefficient, r: %f\n", r);
}
