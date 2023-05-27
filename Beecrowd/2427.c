#include <stdio.h>

int main(){
    
    int lado, blocos = 1;
    scanf("%d", &lado);

    for(int i = lado; i >= 2; i /= 2){
        blocos *= 4;
    }

    printf("%d\n", blocos);

    return 0; 
}