#include <stdio.h>

int main()  {
    long int num, num1, revnum, revnum1, revnum2, revnum3, revnum4, revnum5;
    printf("\nInput 5 digit number:\n");
    scanf("%ld", &num);
    num1 = num;
    revnum5 = num % 10; // 5th digit 
    num = num / 10;
    revnum4 = num % 10; // 4th digit
    num = num / 10;
    revnum3 = num % 10; // 3rd digit
    num = num / 10;
    revnum2 = num % 10; // 2nd digit
    num = num / 10;
    revnum1 = num % 10; // 1st digit
    revnum = revnum5*10000 + revnum4*1000 + revnum3*100 + revnum2*10 + revnum1;
    printf("Reversed Number: %ld\n", revnum);
    if (revnum == num1)
        printf("Reversed number is equal to input number\n");
    else
        printf("Reversed number is not the same as input number\n");
    return 0;
}