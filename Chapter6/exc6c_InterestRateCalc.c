#include <stdio.h>
#include <math.h>

int main() {
    int i, n;
    float p, pa, r, q=4.0, a;
    printf("Input principle, (compounding 4 times a year), and interest rate. I will tell you amount of interest from each year for 10 years:\n");
    scanf("%f %f", &p, &r);
    pa = p;
    for(n = 0; n++ < 10;) {
        a = p * powf((1 + r/q), n*q);
        pa = pa + a;
        printf("Years: %d, Interest Amount: $%.2f, Principle Accumalation: $%.2f\n", n, a, pa);
    }
}