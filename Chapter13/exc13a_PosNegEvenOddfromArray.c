#include <stdio.h>



int main() {
    int even = 0, odd = 0, neg = 0, pos = 0, a[25];
    printf("Choose 25 integer numbers I will spit out how many even, odd, positive and negative numbers you have:\n");
    for (int i=0; i<25; i++) {
        scanf("%d", &a[i]);
        a[i] % 2 == 0 ? even++ : odd++;
        a[i] < 0 ? neg++ : pos++;
    }
    printf("Number of even: %d, odd: %d, positive %d, negative: %d\n", even, odd, pos, neg);
}