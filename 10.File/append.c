#include <stdio.h>

int main(){
    
    FILE *ptr;
    ptr = fopen("mayur.txt","a");  //append
    int num = 101;
    fprintf(ptr, "%d\t", num);
    int num1 = 609;
    fprintf(ptr, "%d", num1);
    fclose(ptr);
    return 0;
}