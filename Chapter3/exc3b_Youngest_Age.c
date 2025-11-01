#include <stdio.h>

int main() {
    int tom, dick, harry;
    printf("Type 3 ages, I will find which is youngest:\n");
    scanf("%d %d %d", &tom, &dick, &harry);
    if (tom < dick) {
        if (tom < harry) {
            printf("The first person is youngest\n");
        }
        else {
            printf("The third person is youngest\n");
        }
    }
    else {
        if (dick < harry) {
            printf("The second person is youngest\n");
        }
        else {
            printf("The third person is youngest\n");
        }
    }
}