#include<stdio.h>

int main(){

    // volume of cylinder, cube, etc...
    
    int radius, height;
    printf("enter a radius:~ ");
    scanf("%d", &radius);
    printf("enter a height:~ ");
    scanf("%d", &height);
    
    printf("volume of sylinder of is = %f",3.14*height*radius*radius);

    return 0;
}