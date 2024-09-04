#include <stdio.h>
#include<string.h>

int main(){
    char name[] = "Jay Swaminarayan";
    int count = 0;

    for(char i=0; name[i]!='\0'; i++){
        count++;
    }

    printf("length of string = %d",count);
    
    return 0;
}