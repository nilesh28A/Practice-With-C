#include <stdio.h>

typedef struct arrow{
    int score;
    float num;
}emp;


int main(){

    emp nil;
    emp *ptr = &nil;

    ptr->num = 10;
    ptr->score = 45;

    printf("score is = %d", nil.score);
    
    return 0;
}