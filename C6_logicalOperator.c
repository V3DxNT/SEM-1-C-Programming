#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 4  Numbers:\n ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    printf("a>b && c>d = %d\n",a>b && c>d );
    printf("a<b && c<d = %d\n",a<b && c<d);

    printf("a||b && c||d %d\n",a||b && c||d);

    printf("b>c && a>d = %d\n",b>c && a>d);
    printf("b<c && b<c = %d\n",b<c && b<c);
    printf("b||c && a||d= %d\n",b||c && a||d);
 
    return 0;
}