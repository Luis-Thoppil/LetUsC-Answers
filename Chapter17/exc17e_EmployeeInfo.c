#include <stdio.h>
#include <stdlib.h>

struct date {
    int day; int month; int year;
};
struct employee {
    int code; char name[20]; struct date datej;
};
struct employee e[20]; ;

int poparray();
int datetodays(const struct employee *);
int comparator(const void *,const void *);
void displayemployees(const struct employee *, int, int);

int main() {
    int nume,d,m,y, todaydays;
    nume = poparray();
    qsort(e, nume, sizeof(e[0]), comparator);
    printf("Displaying employees who've been at the company for more then 3 years from specified date. \n Input date:\n");
    scanf("%d/%d/%d", &d,&m,&y);
    todaydays = (146097*y)/400 + (153*m + 8)/5 + d; //from internet
    displayemployees(e,todaydays,nume);
}

int poparray() {
    static int j;
    char cont;
    for (j; j<20;j++) {
        printf("\nEmployee Code:\n");
        scanf("%d", &e[j].code);
        printf("Enter Name:\n");
        scanf("%19s", &e[j].name);
        printf("Enter date joined (dd/mm/yyyy):\n");
        scanf("%d/%d/%d", &e[j].datej.day, &e[j].datej.month,&e[j].datej.year);
        printf("Continue? (y/n)\n");
        scanf(" %c", &cont);
        if (cont == 'N' || cont == 'n') {
            return (j+1);
        }
    }
}

int datetodays(const struct employee *a) {
    const struct employee *ae = a;
    long int b = (ae->datej.year*146097)/400 + (ae->datej.month*153 + 8)/5 + ae->datej.day; //(146097*y)/400 + (153*m + 8)/5 + d (from the internet)
    return b;
}

int comparator(const void *a, const void *b) {
    long int daysa = datetodays(a); 
    long int daysb = datetodays(b);
    return (daysb) - (daysa);
}

void displayemployees(const struct employee *a,int todaydays, int nume) {
    int i;
    for (i=0; i<nume;i++) {
        if ((todaydays - datetodays(&a[i])) > 1095) // essentially 3 years
        printf("\nEmployee Code: %d\nName: %s\nDate joined: %d/%d/%d\nDays Since joined: %d\n", e[i].code, e[i].name, e[i].datej.day,e[i].datej.month,e[i].datej.year, (todaydays - datetodays(&a[i])));
    }
}


// Chatgpt's improved version. Check it out later..
/*
#include <stdio.h>
#include <stdlib.h>

// Structure for storing employee date of joining
struct date {
    int day;
    int month;
    int year;
};

// Structure for employee details
struct employee {
    int code; 
    char name[20]; 
    struct date datej;
};

// Function prototypes
int poparray(struct employee e[], int max_employees);
long int dateToDays(const struct date *d);
int comparator(const void *a, const void *b);
void displayEmployees(const struct employee e[], int todayDays, int numEmployees);

int main() {
    int numEmployees, d, m, y, todayDays;
    struct employee e[20];  // local array for employees
    
    numEmployees = poparray(e, 20);
    qsort(e, numEmployees, sizeof(e[0]), comparator);

    // Asking for the date input to filter employees
    printf("Displaying employees who've been at the company for more than 3 years from the specified date. \nInput date (dd/mm/yyyy):\n");
    scanf("%d/%d/%d", &d, &m, &y);
    
    // Convert the input date to number of days
    todayDays = dateToDays(&(struct date){d, m, y});
    
    displayEmployees(e, todayDays, numEmployees);
}

// Populates the array of employees and returns the number of employees
int poparray(struct employee e[], int max_employees) {
    int j = 0;
    char cont;

    while (j < max_employees) {
        printf("\nEmployee Code: ");
        scanf("%d", &e[j].code);

        printf("Enter Name: ");
        scanf("%19s", e[j].name);

        printf("Enter date joined (dd/mm/yyyy): ");
        scanf("%d/%d/%d", &e[j].datej.day, &e[j].datej.month, &e[j].datej.year);

        printf("Continue? (y/n): ");
        scanf(" %c", &cont);
        
        if (cont == 'N' || cont == 'n') {
            return j + 1;  // Return the number of employees entered
        }
        j++;
    }
    return j;  // In case max_employees is reached
}

// Converts a date to the number of days since a fixed epoch
long int dateToDays(const struct date *d) {
    // Using the formula for converting a date to days since epoch
    return (146097 * d->year) / 400 + (153 * d->month + 8) / 5 + d->day;
}

// Comparator function to sort employees based on their date of joining
int comparator(const void *a, const void *b) {
    long int daysA = dateToDays(&(((struct employee*)a)->datej));
    long int daysB = dateToDays(&(((struct employee*)b)->datej));
    return (daysB - daysA);  // Sort in descending order
}

// Displays employees who have been with the company for more than 3 years
void displayEmployees(const struct employee e[], int todayDays, int numEmployees) {
    for (int i = 0; i < numEmployees; i++) {
        long int daysSinceJoined = todayDays - dateToDays(&(e[i].datej));
        if (daysSinceJoined > 1095) {  // 3 years = 1095 days
            printf("\nEmployee Code: %d\nName: %s\nDate joined: %d/%d/%d\nDays Since Joined: %ld\n", 
                e[i].code, e[i].name, e[i].datej.day, e[i].datej.month, e[i].datej.year, daysSinceJoined);
        }
    }
}
*/