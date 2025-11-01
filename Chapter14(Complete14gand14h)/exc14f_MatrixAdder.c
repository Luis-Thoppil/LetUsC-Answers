#include <stdio.h>
#define SIZE 4


int main() {
    int sumarr[SIZE][SIZE], arr[SIZE][SIZE], arr2[SIZE][SIZE], i, j, n = SIZE, *pint;
    int (*psumrows)[SIZE];

    printf("Enter Matrix elements for a %dx%d matrix (%d integer elements)\n", n, n, n*n);

    for (i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter Second Matrix elements for another %dx%d matrix (%d integer elements). I will add them together and return sum\n", n, n, n*n);

    for (i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    // Trying to challenge myself to use pointers for 2D arrays!

    for (i = 0;i < n; i++) {
        psumrows = &sumarr[i];
        pint = (int *)psumrows;
        for (j = 0; j < n; j++) {
            *(pint+j) = arr[i][j] + arr2[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        psumrows = &sumarr[i];
        pint = (int *)psumrows;
        printf("\n");
        for(j = 0; j < n; j++) {
            printf("%d ", *(pint+j));
        }
    }
    printf("\n");
    return 0;
}