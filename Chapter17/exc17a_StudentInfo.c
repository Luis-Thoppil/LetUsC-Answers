#include <stdio.h>
struct student {
    int rollnumber;
    char name[30];
    char department[30];
    char course[30];
    int year;
};
struct student s[450];

int addstudent();
void displaystudent(int nums);
void studentsperyear(int sy, int nums);
void rollntoinfo(int n, int nums) ;

int main() {
    int year, numstudent, rollnum;
    numstudent = addstudent();
    displaystudent(numstudent);
    printf("\nEnter a year, I will return all the names of students who enrolled that year!\n");
    scanf("%d", &year);
    studentsperyear(year, numstudent);
    printf("\nEnter roll number, I will output student info!\n");
    scanf("%d", &rollnum);
    rollntoinfo(rollnum, numstudent);
    return 0;
}

int addstudent() {
    int i=0;
    char next = 'y';
    for (i = 0; i < 450; i++) {
        printf("Enter student number of student %d\n", i+1);
        scanf("%d", &s[i].rollnumber);
        printf("Enter name of student %d\n", i+1);
        scanf("%s", &s[i].name);
        printf("Enter department of student %d\n", i+1);
        scanf("%s", &s[i].department);
        printf("Enter course of student %d\n", i+1);
        scanf("%s", &s[i].course);
        printf("Enter year of entry of student %d\n", i+1);
        scanf("%d", &s[i].year);
        printf("Continue? (y/n)\n");
        scanf(" %c", &next); // may need a whitespace before %c, we'll see
        if (next == 'n' || next == 'N')
            return (i+1);
    }
}

void displaystudent(int nums) {
    int i = 0;
    for (i=0;i<nums;i++) {
        printf("\nInfo for Student %d\n", i+1);
        printf("Student Number: %d\n", s[i].rollnumber);
        printf("Name: %s\n", s[i].name);
        printf("Department: %s\n", s[i].department);
        printf("Course: %s\n", s[i].course);
        printf("Year of Entry: %d\n", s[i].year);
    }
}

void studentsperyear(int sy, int nums) {
    int i;
    for (i=0; i < nums; i++) {
        if (s[i].year == sy) {
            printf("Name: %s\n", s[i].name);
        }
    }
}

void rollntoinfo(int rn, int nums) {
    int i;
    for (i=0; i < nums; i++) {
        if (s[i].rollnumber == rn) {
            printf("Name: %s\nDepartment: %s\nCourse: %s\nYear: %d\n", s[i].name, s[i].department, s[i].course, s[i].year);
        }
    }
}