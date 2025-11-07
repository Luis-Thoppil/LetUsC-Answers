#include <stdio.h>

int xstrcomp(char *, char *);

int main() {
    char string1[] = "Jerry", string2[] = "Ferry";
    int x, y, z;
    x = xstrcomp(string1, "Jerry");
    y = xstrcomp(string1, string2);
    z = xstrcomp(string1, "Jerry boy");
    printf("%d %d %d", x, y, z);
    return 0;
}

int xstrcomp(char *str1, char *str2) {
    int diff = 0;
    while (*str1 != '\0') {
        if (*str1 != *str2) {
            diff = *str1 - *str2;
            break;
        }
        else {
            str1++; str2++;
        }
    }
    str1++;
    if((*str1 == '\0') && (*str1 != *str2) && diff == 0) {
        diff = *str1 - *str2;
    }
    
    return diff;
}
