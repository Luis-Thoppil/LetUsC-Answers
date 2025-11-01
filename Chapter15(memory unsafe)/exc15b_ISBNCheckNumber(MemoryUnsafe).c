#include <stdio.h>
#include <string.h>

int main() {
    char string[11];
    int i,j,n=9,numbers[10],sum=0;
    printf("Input ISBN (International Standard Book Number) [10-digits]: \n ========= DO NOT PUT MORE THEN 10 DIGITS =========\nFailure to listen could cause memory buffer overflow, this can delte important information in your device...\n");
    scanf("%10s", string);
    //Check if num of elements is 10 characters + \0
    if (strlen(string) != 10) {
        printf("Invalid input. Seriously be careful with memory buffer overflow!");
        return 1;
    }
    //Check if last character is X, if so, populate first character of numbers with 10. Change max index for for loop from 9-->8
    if (string[9] == 'X') {
        numbers[0] = 10;
        n = 8;
    }
    //For loop each of the elements of string from 0->max index. Input the numbers in reverse order in the numbers array.
    for (i=0, j=n; i<=n; i++, j--) {    
        if (string[i] >= 48 && string[i] <=57) {    //check it's a 0-9 number.
            numbers[j] = string[i] - 48;
        }
        else {
            printf("Invalid input."); 
            return 1;
        }
    }

    for (i=0; i<10; i++) {
        sum = sum + numbers[i]*(i+1);
    }

    if (sum % 11 == 0) {
        printf("Valid IBSN\n");
    }
    else{
        printf("Invalid IBSN");
    }
}