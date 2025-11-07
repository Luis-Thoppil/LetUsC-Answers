#include <stdio.h>
struct bankinfo {
    int accnum;
    char name[30];
    int balance;
};
struct bankinfo b[200];

int popinfo();
void displayaccs(int);
void balbel10(int);
void custwdordep(int);

int main() {
    int numcust;
    numcust = popinfo();
    displayaccs(numcust);
    printf("\n===========================\nAccounts with under £10:\n");
    balbel10(numcust);
    custwdordep(numcust);
    displayaccs(numcust);
}

int popinfo() {
    static int j;
    char cont;
    for (j;j<200; j++) {
        printf("Enter Account Number of Customer %d \n", j+1);
        scanf("%u", &b[j].accnum);
        printf("Enter Name of Customer %d \n", j+1);
        scanf("%29s", &b[j].name);
        printf("Enter Balance of Customer %d \n", j+1);
        scanf("%d", &b[j].balance);
        printf("Continue? (y/n)\n");
        scanf(" %c", &cont);
        if (cont == 'N' || cont == 'n') {
            return (j+1);
        }
    }
}

void displayaccs(int numc) {
    int i;
    printf("\n======= Display All =======\n");
    for (i=0; i<numc; i++) {
        printf("\nCustomer %d Information:\nAccount Number: %d\nName: %s\nBalance: %d\n", i+1, b[i].accnum, b[i].name, b[i].balance);
    }
}

void balbel10(int numc) {
    int i;
    for (i=0; i<numc; i++) {
        if (b[i].balance < 10) {
            printf("\nCustomer %d Information:\nAccount Number: %d\nName: %s\nBalance: %d\n", i+1, b[i].accnum, b[i].name, b[i].balance);
        }
    }
}

void custwdordep(int numc) {
    int i, accnum, wddep, amt;
    printf("Type your bank account number for further actions!\n");
    scanf("%d", &accnum);
    printf("For withdraw type 0 for depositing type 1:\n");
    scanf("%d", &wddep);
    printf("Enter amount: \n");
    scanf("%d", &amt);
        
    for (i=0; i<numc; i++) {
        if (b[i].accnum == accnum) {
            if (wddep == 0) {
                if (b[i].balance < 10+amt)
                    printf("Insufficient funds. Need at least £10 in your account!");
                else {
                    b[i].balance -= amt;
                    printf("New balance: %d", b[i].balance);
                }
            }
            else {
                b[i].balance += amt;
                printf("Thank you for trusting our bank! New balance: %d", b[i].balance);
            }
        }
    }
}