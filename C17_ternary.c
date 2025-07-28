#include <stdio.h>

int main() {
    int a, b,tallest;

    printf("Enter Three Heights: ");
    scanf("%d %d", &a, &b);

    tallest = (a>b)?a:b;

    printf("%d is the tallest\n", tallest);

    return 0;
}
