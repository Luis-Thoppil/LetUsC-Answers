#include <stdio.h>

void leapYear(int);
int main() {
    int yr;
    printf("Put a year, and I will return if it is a leap year or not!:\n");
    scanf("%d", &yr);
    leapYear(yr);
    return 0;
}

void leapYear(int y) {
    if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
        printf("The year is most indubitably a leap year");
    else
        printf("This year is in fact NOT a leap year");
}