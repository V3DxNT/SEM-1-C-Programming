#include <stdio.h>

int fibonacci(int n) 
{
    if (n == 0 || n==1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    int n, i;
    int fibo1 = 0, fibo2 = 1, fibo3;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        fibo3 = fibonacci(i);
        printf("%d ", fibo3);
    }
    printf("\n");

    return 0;
}
