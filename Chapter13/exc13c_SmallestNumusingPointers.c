#include <stdio.h>
#define SIZE 5

int main() {
    int i, arr[5], *ptr1, smallest;
    printf("Enter 5 numbers, I'll find the smallest\n");
    for (i = 0, ptr1 = &arr[0]; i < 5; i++, ptr1++) {
        scanf("%d", ptr1);
        if (i == 0)
            smallest = *(ptr1);
        else if (*ptr1 < smallest) {
            smallest = *ptr1;
        }
    }
    printf("Smallest number: %d\n", smallest);
    return 0;
}