#include <stdio.h>

int main() {
    int i, hr, suff;
    for (i = 1; i<=24; i++) {
        hr = i;
        if (i < 12) {
            printf("Time is %d:00 a.m\n", hr);
        }
        else if (i > 12 && i < 24) {
            hr = hr - 12;
            printf("Time is %d:00 p.m\n", hr);
        }
        else if (i == 12) {
            printf("Time is %d:00 noon\n", hr);
        }
        else if (i == 24) {
            hr = hr - 12;
            printf("Time is %d:00 Midnight\n", hr);
        }
    }
    return 0;
}