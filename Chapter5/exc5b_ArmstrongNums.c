#include <stdio.h>

int main() {
    int num = 100, dumbnum, num1, num2, num3, armnum;
    printf("Armstrong Numbers between 100 and 500: \n");
    while (num <= 500) {
        dumbnum = num;
        num1 = dumbnum % 10;
        dumbnum = dumbnum / 10;
        num2 = dumbnum % 10;
        dumbnum = dumbnum / 10;
        num3 = dumbnum % 10;
        if ((num1*num1*num1) + (num2*num2*num2) + (num3*num3*num3) == num)
            printf("%d, ", num);
        num += 1;
    }
    printf("\n");
    return 0;
}