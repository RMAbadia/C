#include <stdio.h>

int main(){

    int tamanho, min, max, resultado = 0;
    scanf("%d %d %d", &tamanho, &min, &max);
    int valores[tamanho];

    for(int x = 0; x < tamanho; x++){
        scanf("%d", &valores[x]);
    }
    
    for(int i = 0; i < tamanho; i++){
        for(int j = i+1; j < tamanho; j++){
            int temp = valores[i] + valores[j];
            temp >= min && temp <= max ? resultado++ : 0;
        }
    }

    printf("%d\n", resultado);

    return 0;
}