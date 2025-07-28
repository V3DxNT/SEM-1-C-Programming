#include <stdio.h>

struct student 
{
    int rno;
    char name[20];
    float fees;
};

void displayStudent(struct student s) 
{
    printf("\nInside displayStudent (call by value):\n");
    printf("Roll No: %d\n", s.rno);
    printf("Name   : %s\n", s.name);
    printf("Fees   : %.2f\n", s.fees);

    // Modify inside function (will not affect original)
    s.fees += 1000;
    printf("Modified Fees inside function: %.2f\n", s.fees);
}

int main() 
{
    struct student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.rno);

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter fees: ");
    scanf("%f", &s1.fees);

    //(call by value)
    displayStudent(s1);

    printf("\n Original Structure:\n");
    printf("Roll No: %d\n", s1.rno);
    printf("Name   : %s\n", s1.name);
    printf("Fees   : %.2f\n", s1.fees);

    return 0;
}
