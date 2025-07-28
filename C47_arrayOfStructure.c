#include <stdio.h>

struct student {
    int slno;
    char name[20];
    float fees;
};

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n]; 

    
    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Sl. No: ");
        scanf("%d", &s[i].slno);

        printf("Name: ");
        scanf("%s", s[i].name);  

        printf("Fees: ");
        scanf("%f", &s[i].fees);
    }

    // Output student data
    printf("\nStudent Details:\n");
    for(i = 0; i < n; i++) {
        printf("Student %d: Slno = %d, Name = %s, Fees = %.2f\n",
               i + 1, s[i].slno, s[i].name, s[i].fees);
    }

    return 0;
}
