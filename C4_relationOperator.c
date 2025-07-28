#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 4  Numbers:\n ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    printf("a==b = %d \n",a==b);
    printf("c==d = %d \n",c==d);

    printf("a!=b = %d \n",a!=b);

    printf("a<b = %d \n",a<b);
    printf("a<=b = %d \n",a<=b);
    printf("a>b = %d \n",a>b);
    printf("a>=b = %d \n",a>=b);
 
    return 0;
}