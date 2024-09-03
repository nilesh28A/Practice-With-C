#include <stdio.h>

void swap(int *a, int *b);

int main(){

    int nil = 23, mayu = 24;

    swap(&nil,&mayu);
    printf("nil = %d, mayu = %d",nil,mayu);
    
    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}