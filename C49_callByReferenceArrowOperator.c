#include <stdio.h>

struct student {
    int rno;
    char name[20];
    float fees;
};

// Function using call by reference (pointer)
void updateStudent(struct student *s) {
    printf("\nInside updateStudent (call by reference):\n");
    printf("Roll No: %d\n", s->rno);
    printf("Name   : %s\n", s->name);
    printf("Fees   : %.2f\n", s->fees);

    // Modify the original structure through pointer
    s->fees += 1000;
    printf("Updated Fees inside function: %.2f\n", s->fees);
}

int main() {
    struct student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.rno);

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter fees: ");
    scanf("%f", &s1.fees);

    // call by reference
    updateStudent(&s1);

    printf("\nBack in main (modified structure):\n");
    printf("Roll No: %d\n", s1.rno);
    printf("Name   : %s\n", s1.name);
    printf("Fees   : %.2f\n", s1.fees);

    return 0;
}
