#include <stdio.h>

int main() {
    int temp[15],sum=0, su,i,j,dummyNumber[] ={4,5,6,7,1,2,3,4,5,6,7,8,9,1,2,9}, number[16];
    char input[17];

    printf("Enter Credit Card Number (16 digits):\n");
    scanf("%16s", input);

    for (i=0; i<16;i++) {
        number[i] = input[i] - 48;
    }

    for (i=15,j=0; i>=0; i--, j++) {
        if (i % 2 == 0) {
            temp[j] = number[i] * 2;
            if (temp[j]>=10) {
                temp[j] = temp[j] - 9;
            }
        }
        else {
            temp[j] = number[i];
        }
        sum = sum + temp[j];
    }
    if (sum % 10 == 0) {
        printf("This is a valid credit card number\n");
    }
    else {
        printf("Not a valid credit card number. Sum: %d\n", sum);
    }
}