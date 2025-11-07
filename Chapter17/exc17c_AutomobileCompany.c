#include <stdio.h>
struct engpart {
    int serialn; int year; char material[15]; int quant;
};
struct engpart p[20];
int poplist();
void displayparts(int);

int main() {
    int numparts;
    numparts = poplist();
    printf("====== Displaying items from BB1 to CC6 ======\n");
    displayparts(numparts);
}

int poplist() {
    static int j;
    char cont;
    for (j; j<20;j++) {
        printf("\nEnter Serial Number (from AA0 to FF9 hexadecimal)\n");
        scanf("%x", &p[j].serialn);
        printf("Enter year of manufacture:\n");
        scanf("%u", &p[j].year);
        printf("Enter material:\n");
        scanf("%s", &p[j].material);
        printf("Enter quantity manufactured:\n");
        scanf("%u", &p[j].quant);
        printf("Continue? (y/n)\n");
        scanf(" %c", &cont);
        if (cont == 'N' || cont == 'n') {
            return (j+1);
        }
    }
}

void displayparts(int nump) {
    int i;
    for (i=0; i<nump;i++) {
        if (p[i].serialn >= 0xbb1 && p[i].serialn <= 0xcc6) {
            printf("Part SN: %x\nYear of Manufacture: %u\nMaterial: %s\nQuantity Manufactured: %u\n", p[i].serialn, p[i].year, p[i].material, p[i].quant);
        }
    }
} 