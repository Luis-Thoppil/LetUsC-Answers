#include <stdio.h>


int main() {
    int threed[3][2][3] = {
        {{1,2,3}, {4,5,6}},
        {{7,8,9}, {10,11,12}},
        {{13,14,15}, {16,17,18}}
    };

    printf("First element: %d. \nFirst element via pointer: %d\nLast element: %d, Last element via pointer: %d\n", threed[0][0][0], *(*(*threed)), threed[2][1][2], *(*(*(threed+2)+1)+2));
}