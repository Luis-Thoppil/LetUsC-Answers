#include <stdio.h>
#define SIZE 5

int main() {
    int arr[SIZE], i, j, palindrome = 1;
    printf("Enter 5 numbers, if they formed a mirrored list (1st element = last, second = second to last...) I will tell you, if not I will tell you it isnt:\n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0, j = SIZE - 1; i < (SIZE / 2); i++, j--) {
        if (arr[i] != arr[j]) {
            palindrome = 0;
            break;
    }
    }
    if (palindrome == 1)
        printf("Tis a mirrored array yay!\n");
    else
        printf("Tisn't a mirrored array, booo!\n");
    return 0;
}