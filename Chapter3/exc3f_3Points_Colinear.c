#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1, x2, x3, y1, y2, y3, m12, m23;
    printf("\nThis program tells you if 3 points exist on a line (all inputs in integers)... \nType the x and y coordinates of point 1: \n");
    scanf("%d %d", &x1, &y1);
    printf("Type the x and y coordinates of point 2: \n");
    scanf("%d %d", &x2, &y2);
    printf("Type the x and y coordinates of point 3: \n");
    scanf("%d %d", &x3, &y3);
    if ( (y2 - y1) * (x3 - x2) == (x2 - x1) * (y3 - y2)) {      // basically rearrange formula for equal gradient of m12 == m23 => (y2-y1)/(x2-x1) == (y3-y2)/(x3-x2)
        printf("These points are colinear\n");
    }
    else {
        printf("These points sit on different lines\n");
    }
    return 0;
}