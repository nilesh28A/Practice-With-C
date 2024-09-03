#include <stdio.h>

int main(){
    int num,sum=0;
    printf("enter a number:~ ");
    scanf("%d",&num);
    int i=1;
    while(i<=num){
        sum+=i;
        i++;
    }
    printf("sum is = %d",sum);
    return 0;
}