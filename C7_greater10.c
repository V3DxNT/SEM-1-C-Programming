#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number to check: ");
    scanf("%d",&n);;
    
    if(n>10)
    {
        printf("The Number %d is greater than 10",n);
    }
    else{
        printf("The Number %d is not greater than 10",n);
    }
    
    return 0;
}