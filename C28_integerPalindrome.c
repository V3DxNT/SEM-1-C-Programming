#include<stdio.h>

int main()
{
    int n,digits,rev=0;
    printf("Enter the Number: ");
    scanf("%d",&n);

    int originalNumber= n;

    while(n!=0)
    {
        digits=n%10;
        rev=rev*10+digits;
        n/=10;
    }
    
    if(originalNumber == rev)
    {
        printf("The Number is a Palindrome");
    }
    else
    {
        printf("The Number is not a Palindrome");
    }
    

    return 0;
}