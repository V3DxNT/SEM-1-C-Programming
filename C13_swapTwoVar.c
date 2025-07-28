#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the Number to Swap: ");
    scanf("%d%d",&n1,&n2);

    printf("Before Swap: a=%d  b=%d",n1,n2);

    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;

    printf("\n");
    printf("After Swap: a=%d  b=%d",n1,n2);

    return 0;

}
