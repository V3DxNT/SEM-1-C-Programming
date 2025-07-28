#include<stdio.h>
int main()
{
    int a,b,gcd,lcm,rem,num,den;
    
    printf("Enter the Numbers: ");
    scanf("%d %d",&a,&b);
    
    num=n1>n2 ? n1:n2;
    den=n1>n2?n2:n1;

    rem=num%den;

    while(rem!=0)
    {
        num=den;
        den=rem;
        rem=num%den;
    }
    gcd=den;
    lcm=(a*b)/gcd;

    printf("The GCD is: %d \n The LCM is: %d",gcd,lcm);

    return 0;
}