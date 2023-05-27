#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    char inicial[4][100];
    
    for(int i = 0; i < 4; i++){
        scanf("%s", inicial[i]);
    }

    int colunas = strlen(inicial[0]), primeiro, ultimo;
    char matriz[5];

    for(int x = 0; x < colunas; x++){
        for(int j = 0; j < 4; j++){
            matriz[j] = inicial[j][x];
        }

        if(x == 0){
            primeiro = atoi(matriz);
        }
        else if(x == colunas-1){
            ultimo = atoi(matriz);
        }   
    }
    
    for(int x = 1; x < colunas-1; x++){
        for(int j = 0; j < 4; j++){
            matriz[j] = inicial[j][x];
        }

        int temp = atoi(matriz);
        char c = (primeiro*temp + ultimo)%257;

        printf("%c", c);
    }  
    printf("\n"); 

    return 0;
}