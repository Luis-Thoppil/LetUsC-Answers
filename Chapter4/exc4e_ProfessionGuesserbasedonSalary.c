#include <stdio.h>

int main() {
    float sal;
    printf("Enter the salary: \n");
    scanf( "%f", &sal);
    (sal >= 25000 && sal<= 40000? printf("Manager!\n") : (sal>=15000 && sal<25000? printf("Accountant!\n") : printf("Clerk!\n"))); // Weird program (i had to convert program to conditional operators) has anything above 40,000 salary outputting Clerk!?
}