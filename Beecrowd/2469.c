#include <stdio.h>

int main(){

    int tamanho, aparece = 0, temporaria, maior = 0, repete = 0;
    
    scanf("%d", &tamanho);
    int notas[tamanho];

    for(int i = 0; i < tamanho; i++){
        scanf("%d", &notas[i]);
    }

    for(int i = 0; i < tamanho; i++){
        for(int j = i+1; j < tamanho; j++){
            if(notas[j] < notas[i]){
                int temp = notas[j];
                notas[j] = notas[i];
                notas[i] = temp;
            }
        }
    }
    
    for(int k = 0; k <= tamanho; k++){
        if(k == 0){
            temporaria = notas[k];
            aparece++; 
        }
        
        else{
            if(notas[k] == temporaria){
                aparece++;
                temporaria = notas[k];
            }

            else{
                if(aparece > repete){
                    maior = temporaria;
                    repete = aparece;
                }
                else if(aparece == repete && temporaria > maior){
                    maior = temporaria;
                }
                temporaria = notas[k];
                aparece = 1;
            }
        }
    }

    printf("%d\n", maior);

    return 0;
}