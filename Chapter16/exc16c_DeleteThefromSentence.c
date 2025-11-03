#include <stdio.h>

int main() {
    char source[80], target[80];
    char *s = source, *t = target;
    printf("Input sentence and I will output it without instances of 'the'.\nSERIOUS: Do not exceed 80 characters!!\n");
    fgets(source, sizeof(source), stdin);

    while (*s) {
        if (*(s+1) && *(s+2) && ((*s == 't' || *s == 'T') && (*(s+1) == 'h' || *(s+1) == 'H') && (*(s+2) == 'e' || *(s+2) == 'E'))) {
                    s = s + 3;
        }
        else {
            *t = *s; t++; s++;
        }
    }
    *t = 0;
    printf("Sentence without instances of 'the': %s\n", target);
}