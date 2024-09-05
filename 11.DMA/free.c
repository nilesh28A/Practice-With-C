#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    int *ptr;
    ptr = (int*)malloc(n * sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    printf("%d",ptr[1]);

    free(ptr);
    return 0;
}