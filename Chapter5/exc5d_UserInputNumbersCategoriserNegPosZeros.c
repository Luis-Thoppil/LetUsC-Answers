#include <stdio.h>

int main() {
    int num, pos = 0, neg = 0, zeros = 0;
    char endit = 'n';
    printf("Enter as many numbers (ints) as you want. I will show how many negative, positive and zero numbers... \n");
    while(endit != 'y') {
        printf("\nEnter here:\n");
        scanf("%d", &num);
        (num>0? pos++ : (num==0? zeros++ : neg++));
        printf("\nEnd? (y/n): \n");
        scanf(" %c", &endit);
    }
    printf("amount of postive, negative and zero numbers: \n%d, %d, %d\n", pos, neg, zeros);
    return 0;
}