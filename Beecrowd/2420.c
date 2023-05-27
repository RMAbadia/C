#include <stdio.h>

int main(){
    
    int tamanho, soma = 0, divisoria = 0, valor;
    scanf("%d", &tamanho);
    int secao[tamanho];

    for(int i = 0; i < tamanho; i++){
        scanf("%d", &valor);
        soma += valor;
        secao[i] = valor;
    }

    int metade = soma/2;

    for(int x = 0; x < tamanho; x++){
        soma -= secao[x];
        if(soma == metade){
            printf("%d\n", x+1);
            return 0;
        }
    }

    return 0; 
}