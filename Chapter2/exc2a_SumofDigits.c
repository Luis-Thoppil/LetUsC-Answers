#include <stdio.h>

int main()  {
    long int inputnum;
    int digitfive, digitfour, digitthree, digittwo, digitone, sum;
    printf("Type 5 digit number, I will return the sum of the digits:\n");
    scanf("%ld", &inputnum);
    digitfive = inputnum % 10;
    inputnum = inputnum / 10;
    digitfour = inputnum % 10;
    inputnum = inputnum / 10;
    digitthree = inputnum % 10;
    inputnum = inputnum / 10;
    digittwo = inputnum % 10;
    inputnum = inputnum / 10;
    digitone = inputnum % 10;
    inputnum = inputnum / 10;
    sum = digitfive + digitfour + digitthree + digittwo + digitone;
    printf("%d\n", sum);
}