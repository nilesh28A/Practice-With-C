#include <stdio.h>

int main(){
    int num;
    printf("enter a number:~ ");
    scanf("%d",&num);

    for(int i=1; i<=20; i++){
        printf("%2d x %2d = %4d\n",num,i,num*i);
    }
    return 0;
}