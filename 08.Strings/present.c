#include<stdio.h>
#include<string.h>

void cheak(char str[], char ch);

int main(){
    char str[] = "Multispan India";
    char ch = 's';
    cheak(str, ch);
  
    return 0;
}

void cheak(char str[], char ch){
    int cnt = 0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ch){
            cnt++;   
        }
    }
    if(cnt>0){
        printf("charcter is present %d times",cnt);
    }else{
        printf("charcter is not present");
    }
}