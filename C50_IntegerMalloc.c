#include <stdio.h>
#include <stdlib.h>

int main() {
    int *intPtr=(int *)malloc(1*sizeof(int));
    if (intPtr==NULL) {
        printf("Memory allocation failed in main()\n");
        return 1;
    }
    *intPtr = 25; //Assigning Value
    printf("%d\n", *intPtr);

    free(intPtr); //Freeing Memory
    printf("Memory Freed for Integer");
    return 0;
}
