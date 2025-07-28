#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Heights: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the tallest",a);
        }
        else{
            printf("%d is the tallest",c);
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("%d is the tallest",b);
        }
        else
        {
            printf("%d is the tallest",c);
        }
    }
    return 0;
}