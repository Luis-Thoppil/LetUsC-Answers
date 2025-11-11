#include <stdio.h>

int main() {
    FILE *fp;
    fp = NULL;
    char ch;
    int nol = 0, not = 0, nob = 0, noc = 0;
    fp = fopen("/home/ubuntu/Documents/Thoughts/LifeonMars.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    while (1) {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        noc++;
        if (ch == ' ')
            nob++;
        if (ch == '\t')
            not++;
        if (ch == '\n')
            nol++;
        
    }
    fclose(fp);
    printf("Number of characters: %d\nNumber of spaces: %d\nNumber of tabs: %d\nNumber of lines: %d\n", noc, nob, not, nol);
    return 0;
}