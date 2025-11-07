#include <stdio.h>

int xstrcomp(const char *, const char *);

int main() {
    char string1[] = "Jerry", string2[] = "Ferry";
    int x, y, z;
    x = xstrcomp(string1, "Jerry");
    y = xstrcomp(string1, string2);
    z = xstrcomp(string1, "Jerry boy");
    printf("%d %d %d", x, y, z);
    return 0;
}

int xstrcomp(const char *str1, const char *str2) {
    while (*str1 == *str2) {
        if (*str1 == '\0') {
            return 0;
        }
        str1++; str2++;
    }
    return (*str1 - *str2);
}
