#include <stdio.h>
#include <math.h>

int main() {
    int i;
    float x, a, sum = 0;
    printf("Input number (integer), I will calc natural log using taylor series expansion to 100 terms: \n");
    scanf("%f", &x);
    for(i = 1; i <= 100; i++) { // we doin 100 iterations for accuracy
        a = (1.0/i) * ( pow(((x-1) / x), i));
        sum = sum + (1.0/i) * pow((x-1) / x, i); //fixed equation 1.0/i NOT 1/2
        printf("iteration:%d  adding:%f  x=%f   cummalative:%f\n", i, a, x, sum);
    }
    printf("\nln(%f) = %f\n", x, sum);
    return 0;
}