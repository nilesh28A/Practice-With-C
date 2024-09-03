#include <stdio.h>

int sum(int n);

int main(){
    
    int a=10;
    printf("the sum is %d",sum(a));

    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }
    return sum(n-1)+n;
}