#include <stdio.h>

int main(){
    int num,div=0;
    printf("enter a number:~ ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        if(num%i==0){
            div++;
        }
    }
    if(div==2){
        printf("Prime Number");
    }else{
    printf("not Prime");
    }
    return 0;
}