#include <stdio.h>

int main() {
    int a, b, c, tallest;

    printf("Enter Three Heights: ");
    scanf("%d %d %d", &a, &b, &c);

    tallest = (a >= b && a >= c) ? a : 
              (b >= a && b >= c) ? b : c;

    printf("%d is the tallest\n", tallest);

    return 0;
}
