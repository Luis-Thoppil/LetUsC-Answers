// BONUS, added functionality to take in whatever date and tell you the day of the week it was on
#include <stdio.h>

int main() {
    int yr,weekday;
    long int days;
    printf("Give the year, and I will tell you what day of the week Jan 1st was on in that year:\n");
    scanf("%d", yr);
    days = (yr - 1)*365L + ((yr - 1)/4) - ((yr - 1)/100) + (yr - 1)/400;
    weekday = days % 7;
    if (weekday == 0) {
        printf("Falls on a Monday\n");
    }
    if (weekday == 1) {
        printf("Falls on a Tuesday\n");
    }
    if (weekday == 2) {
        printf("Falls on a Wednesday\n");
    }
    if (weekday == 3) {
        printf("Falls on a Thursday\n");
    }
    if (weekday == 4) {
        printf("Falls on a Friday\n");
    }
    if (weekday == 5) {
        printf("Falls on a Saturday\n");
    }
    if (weekday == 6) {
        printf("Falls on a Sunday\n");
    }
}