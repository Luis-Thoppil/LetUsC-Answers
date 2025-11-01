#include <stdio.h>
#include <math.h>


int main() {
    int i, sum = 0, arr[15] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    float sqrdiff, std, avg, ssum = 0;
    for(i = 0; i < 15; i++) {
        sum = sum + arr[i];
    }
    avg = sum / 15.0;
    
    for(i = 0; i < 15; i++) {
        sqrdiff = pow(arr[i] - avg,2);
        ssum = ssum+sqrdiff;
    }
    std = sqrt(ssum / 15.0);
    
    printf("\nMean: %f\nStandard Deviation: %f\n", avg, std); // Textbook could have shown sum symbol!
}