#include <stdio.h>

void printarr(int a[], int n);
void reversearr(int a[], int n);

int main(){
    int arr[] = {6,7,8,9,10,11,12,13};
    printarr(arr,7);
    reversearr(arr,7);
    printarr(arr,7);
    return 0;
}

void printarr(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t",a[i]);
        
    }
    printf("\n");
}

void reversearr(int a[], int n){
    for(int i=0; i<n/2; i++){
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    printf("\n");
}