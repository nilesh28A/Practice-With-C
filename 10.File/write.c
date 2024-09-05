#include <stdio.h>

int main(){
    
    FILE *ptr;
    ptr = fopen("mayur.txt","w");  //write
    int num = 45;
    fprintf(ptr, "%d\t", num);
    int num1 = 76;
    fprintf(ptr, "%d", num1);
    fclose(ptr);
    return 0;
}