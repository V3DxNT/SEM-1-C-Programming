#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the Number to check: ");
    scanf("%d%d",&n1,&n2);
    
    if(n1>n2)
    {
        printf("The Number %d is greater than %d",n1,n2);
    }
    else{
        printf("The Number %d is greater than %d",n2,n1);
    }
    
    return 0;
}