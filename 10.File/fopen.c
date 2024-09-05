#include <stdio.h>

int main(){
    
    FILE *ptr;
    ptr = fopen("nil.txt","r");  //read
    int num;
    fscanf(ptr, "%d", &num);
    printf("%d\n",num);
    fscanf(ptr, "%d", &num);
    printf("%d\n",num);

    fclose(ptr);
    return 0;
}