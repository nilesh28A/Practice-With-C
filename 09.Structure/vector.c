#include <stdio.h>

struct vector{
    int i;
    int j;
};

int main(){
    struct vector v1 = {13,16};
    printf("the value of vactor is %di + %dj",v1.i,v1.j);
    return 0;
}