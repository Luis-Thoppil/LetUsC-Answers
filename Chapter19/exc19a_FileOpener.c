#include <stdio.h>

int main() {
    FILE *fp;
    fp =NULL;
    char ch;
    fp = fopen("/home/ubuntu/Documents/Thoughts/LifeonMars.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    while (1) {
        ch = fgetc(fp);
        if ( ch == EOF) 
            break;
        printf("%c", ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}