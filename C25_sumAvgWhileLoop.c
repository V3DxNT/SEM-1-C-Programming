#include<stdio.h>
int main()
{
    int sum=0,i=1,avg;
    int n;
    printf("Enter the Number to find Sum and Average: ");
    scanf("%d",&n);

    while(i<=n)
    {
        sum+=i;
        i++;
    }
    
    avg=sum/n;

    printf("The Sum of the Range is: %d",sum);
    printf("The Average of the Range is: %d",avg);

    return 0;
}