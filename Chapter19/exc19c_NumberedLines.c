 #include <stdio.h>
 #include <stdlib.h>

 int main() {
    FILE *fp;
    char ch, source[67]; // Max path for some OS is 66 chars apparently
    int count = 1;
    printf("\nEnter file name: ");
    scanf("%s", source);
    fp = fopen(source, "r");
    if (fp == NULL) {
        puts("Unable to open file."); exit (0);
    }
    printf("\n%3d: ",count);
    while ((ch = getc(fp)) != EOF) {
        if (ch == '\n') {
            count++; printf("\n%3d: ",count);
        }
        else    
            printf("%c",ch);
    }
    fclose(fp);
    return 0;
 }