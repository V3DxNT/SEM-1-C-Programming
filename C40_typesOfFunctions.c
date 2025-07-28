#include <stdio.h>

// 1. No parameters, no return value
void addNoParamNoReturn() 
{
    int a = 10, b = 20;
    int sum = a + b;
    printf("Sum inside addNoParamNoReturn: %d\n", sum);
}

// 2. With parameters, no return value
void addWithParamNoReturn(int a, int b) 
{
    int sum = a + b;
    printf("Sum inside addWithParamNoReturn: %d\n", sum);
}

// 3. No parameters, with return value
int addNoParamWithReturn() 
{
    int a = 15, b = 25;
    return a + b;
}

// 4. With parameters and return value
int addWithParamWithReturn(int a, int b) 
{
    return a + b;
}

int main() 
{
    // 1.
    addNoParamNoReturn();

    // 2.
    addWithParamNoReturn(30, 40);

    // 3.
    int sum3 = addNoParamWithReturn();
    printf("Sum returned from addNoParamWithReturn: %d\n", sum3);

    // 4.
    int sum4 = addWithParamWithReturn(50, 60);
    printf("Sum returned from addWithParamWithReturn: %d\n", sum4);

    return 0;
}
