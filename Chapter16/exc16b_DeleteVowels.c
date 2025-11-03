#include <stdio.h>

int main() {
    int i;
    char source[81], target[81], *s, *t, temp;
    printf("Type here your sentence, must be less then 80 chars long!\n");
    fgets(source, sizeof(source), stdin); //memory safe alt to gets!
    s=source; t = target;
    while (*s != 0) {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' || *s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U' ) {
            s++;
        }
        else {
            *t = *s; t++; s++;
        }
    }
    *t = 0;
    printf("Sentence without vowels: %s\n", target);
}