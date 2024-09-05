#include <stdio.h>

int main(){
    
    FILE *ptr;
    ptr = fopen("nil.txt","r");  //read
    while(1){
        char ch = fgetc(ptr);
        printf("%c",ch);
        if(ch==EOF){
            break;
        }
    }
    fclose(ptr);
    return 0;
}