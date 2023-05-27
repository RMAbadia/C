#include <stdio.h>

int main(){

    int linha, i, x;
    float matriz[12][12], soma = 0;
    char operacao;

    scanf("%d %c", &linha, &operacao);

    for (x = 0; x < 12; x++){
        for(i = 0; i < 12; i++){
            scanf("%f", &matriz[x][i]);                  
        }
    }

    
    for (x = 0; x < 12; x++){
        if (x == linha){
            for(i = 0; i < 12; i++){
                soma += matriz[x][i];  
            }
        }
    }

    if (operacao == 'S'){
        printf("%.1f\n", soma);   
    }
    else{
        printf("%.1f\n", soma/12);  
    }
    
    return 0;
}