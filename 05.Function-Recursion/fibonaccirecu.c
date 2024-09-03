#include <stdio.h>

int fibonacci(int n);

int main(){
    int number;    
    printf("Enter the number of elements:");    
    scanf("%d",&number);
    for(int i=1; i<=number; i++){   
    printf("%d\t",fibonacci(i));
    }
    return 0;  
}

int fibonacci(int n){
    if(n==2){
        return 1;
    }
    if(n==1){
        return 0;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}