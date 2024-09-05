#include <stdio.h>
#include<stdlib.h>

int main(){
    int n, n1;
    printf("enter memory size: ");
    scanf("%d",&n);

    int *ptr;
    ptr = (int*)malloc(n * sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    printf("%d\n",ptr[1]);

    printf("enter memory new size: ");
    scanf("%d",&n1);

    ptr = (int*)realloc(ptr, n1);
    ptr[8]=50;
    printf("%d\n",ptr[1]);
    printf("%d",ptr[8]);

    return 0;
}