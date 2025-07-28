#include<stdio.h>
int main()
{
    char n1,n2;
    printf("Enter the Number to check: ");
    scanf("%c%c",&n1,&n2);
    
    if(n1>n2)
    {
        printf("The Number %c is greater than %c",n1,n2);
    }
    else{
        printf("The Number %c is greater than %c",n2,n1);
    }
    
    return 0;
}