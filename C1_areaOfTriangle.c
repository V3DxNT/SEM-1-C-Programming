#include <stdio.h>

int main()
{
    int base,height,area;
    printf("Enter the value of Base: ");
    scanf("%d",&base);

    printf("Enter the value of Height: ");
    scanf("%d",&height);

    area=0.5*base*height;
    
    printf("The Area is %d",area);
    
    return 0;

}