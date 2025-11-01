#include <stdio.h> 

void kilotounits(float, float *, float *, float *);

int main() {
    float kilos, grams, tons, pounds;
    printf("Input number of kilos, I will output eqv weight in Grams, Tons and Pounds.\n");
    scanf("%f", &kilos);
    kilotounits(kilos, &grams, &pounds, &tons);
    printf("Grams: %f, Pounds: %f, Tons: %f\n", grams, pounds, tons);
    return 0;
}

void kilotounits(float x, float *y, float *z, float *a1) {
    *y = x*1000;
    *z = x*2.205;
    *a1 = x*0.00110231;
}