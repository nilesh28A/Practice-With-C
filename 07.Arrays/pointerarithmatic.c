#include <stdio.h>

int main(){
    int markes[]={10,20,30,40};

    int *ptr = markes;

    for(int i=0; i<4; i++){
        printf("%d\n",*ptr);
        ptr++;
    }
    return 0;
}