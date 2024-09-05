#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    int *ptr;
    ptr = (int*)calloc(n , sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3];
    ptr[4];

    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[4]);

    return 0;
}