#include <stdio.h>

int main() {
    int i,j,arr[3][3],arr2[3][3],multarr[3][3],*pint1, *pint2, *pint3;
    int (*p1)[3], (*p2)[3], (*p3)[3];
    printf("Matrix 3x3 multiplication. Enter elements for a 3x3 matrix\n");
    for (i=0; i < 3; i++) {
        p1 = &arr[i];
        pint1 = (int *)p1;
        for (j = 0; j < 3; j++)
            scanf("%d", (pint1+j));
    }
    
    printf("\nEnter elements for another 3x3 matrix\n");
    for (i=0; i < 3; i++) {
        p2 = &arr2[i];
        pint2 = (int *)p2;
        for (j = 0; j < 3; j++)
            scanf("%d", (pint2+j));
    }

    for (i = 0; i < 3; i++) {
        FINISH THIS
        // fill in values for multarr using arr1 and arr2 elements.
    }
}