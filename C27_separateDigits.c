#include<stdio.h>

int main()
{
    int n,digits;
    printf("Enter the Number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        digits=n%10;
        printf("\n %d",digits);
        n/=10;
    }

    return 0;
}