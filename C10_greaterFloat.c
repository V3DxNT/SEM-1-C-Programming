#include<stdio.h>
int main()
{
    float n1,n2;
    printf("Enter the Number to check: ");
    scanf("%f%f",&n1,&n2);
    
    if(n1>n2)
    {
        printf("The Number %f is greater than %f",n1,n2);
    }
    else{
        printf("The Number %f is greater than %f",n2,n1);
    }
    
    return 0;
}