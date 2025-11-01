#include <stdio.h>

int main() {
    int i, j, arr[3][3], issym = 1;
    printf("Enter Matrix elements for a 3x3 matrix (9 integer elements)\n");

    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 3 && issym; i++) {
        for(j = i + 1; j < 3 && issym; j++) {
            if (arr[i][j] != arr[j][i]) {
                issym = 0;
                printf("Matrix is not symmetric\n");
            }

        }
    }
    if (issym == 1) {
        printf("Matrix is symmetric");
    }
    return 0;
}