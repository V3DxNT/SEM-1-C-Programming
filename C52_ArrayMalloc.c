#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=5,sum=0;
    int *arr=(int *)malloc(sizeof(int)*n);

    if(arr==NULL) {
        printf("Memory allocation Failed for Array");
        return 1;
    }

    //Assigning Values
    for(int i=0;i<n;i++) {
        arr[i]=(i+1)*10;
        sum+=arr[i];
    }

    //Printing Array Values
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("sum=%d\n",sum);

    free(arr);
    printf("Memory Freed for Integer");

    return 0;
}