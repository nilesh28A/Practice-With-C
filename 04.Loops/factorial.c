#include <stdio.h>

int main(){
    int num,fact=1;
    printf("enter a number:~ ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        fact*=i;
    }
    printf("factorial is = %d",fact);
    return 0;
}