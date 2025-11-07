#include <stdio.h>

void xstrcat(char *, char *);

int main() {
    char source[] = "Folks!", target[50] = "Hello ";
    xstrcat(target, source);
    printf("Source string: %s\n", source);
    printf("Target String: %s\n", target);
    return 0;
}

void xstrcat(char *t, char *s) {
    while (*t != '\0') {
        t++;
    }
    while (*s != '\0') {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
}