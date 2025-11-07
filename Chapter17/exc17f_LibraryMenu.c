#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct library {
    int ascnum; char booktitle[30]; char author[20]; float price; 
};
struct library lib[20];

int addbook();
void displaylist(int);
void authorlist(int);
void titleperaccnum(int);

int main() {
    int choice, numb = 0, ch;
    while (1) {
    printf("\n(1) Add book information \n(2) Display book information \n(3) List all books of given author \n(4) List the title specified by accession number \n(5) List the count of books in the library  \n(6) Exit\nInput 1-6 to choose option\n");
    scanf("%d", &choice);
    while ((ch = getchar()) != '\n' && ch != EOF);
    switch (choice) {
        case 1:
            numb = addbook();
            break;
        case 2:
            displaylist(numb);
            break;
        case 3:
            authorlist(numb);
            break;
        case 4:
            titleperaccnum(numb);
            break;
        case 5:
            printf("\nNumber of books in our library %d\n", numb);
            break;
        case 6:
            exit (0);
    }
    }
}

int addbook() {
    int i;
    static int count = 0;
    char cont;
    for (i = 0;i < 20; i++) {
        count++;
        lib[i].ascnum = count;

        printf("Enter book title:\n");
        if (fgets(lib[i].booktitle, sizeof(lib[i].booktitle), stdin)) {
            lib[i].booktitle[strcspn(lib[i].booktitle, "\n")] = '\0';
        }

        printf("Enter book author\n");
        if (fgets(lib[i].author, sizeof(lib[i].author), stdin)) {
            lib[i].author[strcspn(lib[i].author, "\n")] = '\0';
        }

        printf("Enter book price!\n£ ");
        scanf("%f", &lib[i].price);
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        printf("Continue? (y/n): ");
        scanf("%c", &cont);
        while ((ch = getchar()) != '\n' && ch != EOF);
        
        if (cont == 'N' || cont == 'n') {
            return i + 1;  // Return the number of employees entered
        }
    }

}

void displaylist(int numb) {
    printf("\n======== Displaying Books ========\n");
    for (int i =0; i<numb; i++) {
        printf("\nBook %d Info:\nBook title: %s\nBook author: %s\nBook price: £ %.2f\n", lib[i].ascnum, lib[i].booktitle, lib[i].author,lib[i].price);
    }
    printf("\n=================================\n");
}

void authorlist(int numb) {
    char author[20];
    printf("\nEnter Author name to display all of their books in our catalogue:\n");
    if (fgets(author, sizeof(author), stdin)) {
            author[strcspn(author, "\n")] = '\0';
        }
    printf("\n======== Displaying %s's Books ========\n", author);
    for (int i =0; i<numb; i++) {
        if (strcmp(author, lib[i].author) == 0)
            printf("\nBook %d Info:\nBook title: %s\nBook author: %s\nBook price: £%.2f\n", lib[i].ascnum, lib[i].booktitle, lib[i].author,lib[i].price);
    }
    printf("\n=================================\n");
}

void titleperaccnum(int numb) {
    int ascnum1;
    printf("\nEnter ascension number to display all of their books in our catalogue:\n");
    scanf("%d", &ascnum1);
    printf("\n======== Displaying Book %d ========\n", ascnum1);
    for (int i =0; i<numb; i++) {
        if (ascnum1 == lib[i].ascnum)
            printf("\nBook %d Info:\nBook title: %s\nBook author: %s\nBook price: £ %.2f\n", ascnum1, lib[i].booktitle, lib[i].author,lib[i].price);
    }
    printf("\n=================================\n");
}