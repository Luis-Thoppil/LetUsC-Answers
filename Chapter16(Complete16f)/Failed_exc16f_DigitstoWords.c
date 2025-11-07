#include <stdio.h>
#include <string.h>

int main() {
    char number[10], *n = number;
    char *first[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int valid = 0,i, count;
    
    printf("Input multiple digit number (9 digits max)\nNote: Longer numbers will just get truncated!\n");
    while(!valid) {
        fgets(number, sizeof(number), stdin);
        number[strcspn(number, "\n")] = '\0';
        valid = 1; i = 0; count = 0;
        while (number[i] != 0) {
            if (number[i] > 57 || number[i] < 48) {
                valid = 0;
                printf("Invalid character %c\n", number[i]);
                break;
            }
            else {
                i++; count++;
            }
        }
        if (valid == 0)
            printf("Invalid number!\n");
    }

    
}