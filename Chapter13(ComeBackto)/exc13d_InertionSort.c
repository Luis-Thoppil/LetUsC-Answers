#include <stdio.h>
#define SIZE 5

int main() {
    int temp, i, j, arr[SIZE];
    printf("Enter 5 numbers, I will return sorted list smallest to largest using insertion sort\n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
        for (j = i; j >= 0; j--) {
            if (j == 0)
                break;
            if (arr[j] > arr[j-1])
                break;
            else {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i=0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}