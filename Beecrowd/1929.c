#include <stdio.h>


int triangulo(int x, int y, int z){
    if(x + y > z && x + z > y && y + z > x){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int matriz[4], x, i, j, k, soma = 0;
    
    for (x = 0; x < 4; x++){
        scanf("%d", &matriz[x]);
    }
    
    for(i = 0; i < 4; i++){
        for(j = i+1; j < 4; j++){
            for(k = j+1; k < 4; k++){
                soma += triangulo(matriz[i], matriz[j], matriz[k]);
            }
        }
    }

    soma == 0 ? printf("N\n") : printf("S\n");

    return 0;
}