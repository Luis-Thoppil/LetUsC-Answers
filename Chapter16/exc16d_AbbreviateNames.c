#include <stdio.h>
#include <string.h>


int main() {
    char copyfullname[100],fullname[100], *f, *token;
    int count = 0;
    printf("Input full name [first name] [middle name] [surname]. I will abbreviate first name and middle name! (or if you have 2 first names works the same)\n(Max characters per name = 29!!!)\n");
    fgets(fullname, sizeof(fullname), stdin);
    
    strcpy(copyfullname, fullname); // fullname gets modified by strtok so space --> \0. That's why we make a copy
    token = strtok(fullname, " ");
    char initials[100] = "";

    while (token) {
        count++;
        if (count <= 2) {
            strncat(initials, token, 1);
            strcat(initials, ".");
        }
        else {
            strcat(initials, " ");
            strcat (initials, token);
        }
        token = strtok(NULL, " ");
        
    }
    printf("Abbreviation: %s\n", initials);
    return 0;
}
