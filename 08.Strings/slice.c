#include <stdio.h>
#include<string.h>

void slice(char a[], int n, int m);

int main(){
    char name[] = "Jay Swaminarayan";
    int count = 0;

    slice(name,2,12);
    
    return 0;
}

void slice(char a[], int n, int m){
    char newstr[15];
    int j=0;
    for(int i=n; i<=m; i++, j++){
        newstr[j] = a[i];
    }
    newstr[j]='\0';
    puts(newstr);
}