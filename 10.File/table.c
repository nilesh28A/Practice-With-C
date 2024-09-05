#include <stdio.h>

int main(){
    
    FILE *tptr;
    int num;
    printf("enter a number:~ ");
    scanf("%d",&num);
    
    tptr = fopen("table.txt","w");  //write
    for(int i=1; i<=10; i++){
        fprintf(tptr,"%d\n",num*i);
    }

    fclose(tptr);
    return 0;
}