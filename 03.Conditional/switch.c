#include <stdio.h>

int main(){
    char sensor;
    printf("select sensor\n");
    scanf("%c",&sensor);

    switch (sensor){
    case 'j':
        printf("j-type sensor is selected\n");
        break;

    case 'k':
        printf("k-type sensor is selected\n");
        break;

    case 'p':
        printf("pt-100 sensor is selected\n");
        break;        
    
    default:
        printf("wrong sensor is selected\n");
        break;
    }
    return 0;
}