#include <stdio.h>
#define SIZE 5

void modify(int *, int);

int main() {
    int arr[SIZE], i;
    printf("Type 5 numbers in and I will return to you the numbers multiplied by 3 (using a function to modify it)\n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    modify(&arr[0], SIZE);

    for (i=0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void modify(int *arrptr, int length) {
    int i;
    for (i = 0; i < length; i++) {
        *arrptr = *arrptr * 3;
        arrptr++;
    }
}