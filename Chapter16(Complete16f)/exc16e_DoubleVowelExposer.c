#include <stdio.h>

int main() {
    char temp[3], text[100], *t = text;
    int  count=0;

    printf("Input text, I will find all double vowels!\n");
    fgets(text, sizeof(text), stdin);

    while (*t) {
        if (*t == 'a' || *t == 'e' || *t == 'i' || *t == 'o' || *t == 'u' || *t == 'A' || *t == 'E' || *t == 'I' || *t == 'O' || *t == 'U') {
            temp[0] = *t;
            if (*(t+1) == 'a' || *(t+1) == 'e' || *(t+1) == 'i' || *(t+1) == 'o' || *(t+1) == 'u' || *(t+1) == 'A' || *(t+1) == 'E' || *(t+1) == 'I' || *(t+1) == 'O' || *(t+1) == 'U') {
                temp[1] = *(t+1); temp[2] = '\0';
                count++;
                printf("Double vowel instance #%d: %s\n", count, temp);
            }
        }
        t++;
    }
    printf("Count is %d", count);
}