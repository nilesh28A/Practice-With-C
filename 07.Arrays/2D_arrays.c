#include <stdio.h>

int main(){
    
    int arr[3][2] = {{1,4},
                     {9,3}, 
                     {8,6}};

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}   