#include <stdio.h>

int factorial(int n);

int main(){
    
    int a=5;
    printf("the factorial is %d",factorial(a));

    return 0;
}

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return factorial(n-1)*n;
}