#include <stdio.h>

struct vector{
    int i;
    int j;
};

struct vector sumVactor (struct vector v1, struct vector v2);

int main(){
    struct vector v1 = {13,16};
    struct vector v2 = {18,20};
    struct vector v3 = sumVactor(v1,v2);
    printf("the value of vactor is %di + %dj",v3.i,v3.j);
    return 0;
}

struct vector sumVactor (struct vector v1, struct vector v2){
    struct vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}