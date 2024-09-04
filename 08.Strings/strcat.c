#include <stdio.h>
#include<string.h>
int main(){
    char st1[] = "Nilesh";
    char st2[] = " Asodariya";
    strcat(st1,st2);
    printf("name = %s",st1);
    return 0;
}