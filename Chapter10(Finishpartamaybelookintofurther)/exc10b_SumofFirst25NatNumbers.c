#include <stdio.h>

int natnums(int);

int main() {
    printf("%d", natnums(25));
}

int natnums(int x) {
    int sum = 0;
    if (x == 0) {
        return sum;
    }
    sum = x + natnums(x-1);
    return (sum);
}