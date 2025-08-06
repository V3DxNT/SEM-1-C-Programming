#include <stdio.h>
#include <stdlib.h>

int main() {
    char *charPtr=(char *)malloc(1*sizeof(char));
    if (charPtr==NULL) {
        printf("Memory allocation failed in main()\n");
        return 1;
    }
    *charPtr = 'v'; //Assigning Value
    printf("%c\n", *charPtr);

    free(charPtr); //Freeing Memory
    printf("Memory Freed for Integer");
    return 0;
}
