#include <stdio.h>
#include<string.h>

int main(){
    char name[] = "Jay Swaminarayan";

    for(char i=0; name[i]!='\0'; i++){
        name[i] = name[i] + 1;
    }

    printf("salted string = %s",name);
    
    return 0;
}