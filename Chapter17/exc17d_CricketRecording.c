#include <stdio.h>
#include <stdlib.h>


struct cricketer {
    char name[20]; int age; int tmatches; int avgruns;
};
struct cricketer c[20];
int poparray();
int comparator(const void *,const void *);
void displayplayers(int);

int main() {
    int numcricketers;
    numcricketers = poparray();
    qsort(c, numcricketers, sizeof(c[0]), comparator);
    displayplayers(numcricketers);
}

int poparray() {
    static int j;
    char cont;
    for (j; j<20;j++) {
        printf("\nEnter name:\n");
        scanf("%19s", &c[j].name);
        printf("Enter age:\n");
        scanf("%u", &c[j].age);
        printf("Enter number of test matches:\n");
        scanf("%u", &c[j].tmatches);
        printf("Enter average number of runs per match:\n");
        scanf("%u", &c[j].avgruns);
        printf("Continue? (y/n)\n");
        scanf(" %c", &cont);
        if (cont == 'N' || cont == 'n') {
            return (j+1);
        }
    }
}

int comparator(const void *a, const void *b) {
    const struct cricketer *ca = a;
    const struct cricketer *cb = b;
    return cb->avgruns - ca->avgruns;
}



void displayplayers(int numc) {
    int i;
    printf("\n======= Display All =======\n");
    for (i=0; i<numc; i++) {
        printf("\nCrickter %d Information:\nName: %s\nAge: %u\nNumber of matches: %u\nAverage number of runs: %u\n", i+1, c[i].name, c[i].age, c[i].tmatches, c[i].avgruns);
    }
}