#include <stdio.h>

int main() {
    int n, i;
    int fibo1 = 0, fibo2 = 1, fibo3;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", fibo1);
        fibo3 = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = fibo3;
    }

    printf("\n");
    return 0;
}
