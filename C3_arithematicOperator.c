#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 Numbers: ");
    scanf("%d%d",&a,&b);

    printf("The Addition of the Numbers is: %d",(a+b));
    printf("The Subtraction of the Numbers is: %d",(a-b));
    printf("The Multiplication of the Numbers is: %d",(a*b));
    printf("The Division of the Numbers is: %d",(a/b));
    printf("The Modulus of the Numbers is: %d",(a%b));

    return 0;
}