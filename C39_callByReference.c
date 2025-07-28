#include <stdio.h>

// Swap function using call by reference (pointers)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside swap function: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;

    printf("Before swap function call: x = %d, y = %d\n", x, y);

    swap(&x, &y);  // Pass addresses of x and y
    
    printf("After swap function call: x = %d, y = %d\n", x, y);

    return 0;
}
