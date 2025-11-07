#include <stdio.h>
#define SIZE 5

int main() {
    int temp, i, j, arr[SIZE];
    printf("Enter 5 numbers, I will return sorted list smallest to largest using insertion sort\n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < SIZE; i++) {
        temp = arr[i];
        for (j = i-1; j >= 0 && arr[j] > temp; j--) {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }

    for (i=0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}