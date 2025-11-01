#include <stdio.h>
#include <math.h>

int main() {
    int i, fpop = 100000, yrs = 10, pop;
    float r = 0.1;
    for(i=1; i<=yrs; i++) {
        pop = fpop / (pow(1+r, i));
        printf("\nPopulation: %d    number of years ago: %d\n", pop, i);
    }
}