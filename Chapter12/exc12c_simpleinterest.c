#include <stdio.h>
#include "exc12c_simpleinterest.h"

int main() {
    float p=1000, n=10, r=10, interest, amount;
    interest = INTEREST(p,n,r);
    amount = AMOUNT(p, interest);
    printf("This is the Simple Interest for 1000 principle over 10 years with fixed interest rate of 10%%. \nAmount: %.2f\nInterest: %.2f\n", amount, interest);
}