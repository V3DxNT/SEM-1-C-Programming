#include<stdio.h>

int main()
{
    int n,fact=1;
    printf("Enter the Number: ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Factorial of Negative Number is not possible");
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
    }
    printf("The Factorial of the Number is:%d",fact);

    return 0;
}