#include <stdio.h>

float c2f(float a);

int main(){
    float temp;
    printf("enter temp:~");
    scanf("%f",&temp);

    printf("temp is %0.2f Ferenheat..",c2f(temp));

    return 0;
}

float c2f(float a){
    return (a*9/5)+32;
}