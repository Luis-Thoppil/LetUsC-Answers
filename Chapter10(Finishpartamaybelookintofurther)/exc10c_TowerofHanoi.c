#include <stdio.h>

void pegging(int, char, char, char);

int main() {
    int n = 4;
    char a = 'A', b = 'B', c = 'C';
    pegging(n, a, c, b);
}

void pegging(int height, char current, char target, char spare) {
    if (height == 1) {
        printf("Move disk from %c to %c\n", current, target);
    }
    else {
        pegging(height - 1, current, spare, target);
        printf("Move Disk from %c to %c\n", current, target);
        pegging(height - 1, spare, target, current);
    }
}