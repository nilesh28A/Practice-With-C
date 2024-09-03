#include<stdio.h>

int main(){
    
    int temp;
    printf("enter temp. in C':~ ");
    scanf("%d",&temp);

    float f = (9.0/5.0)*temp + 32;
    printf("temperature in Fahrenheit is %f",f);

    return 0;
}