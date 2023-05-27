#include <stdio.h>

void ordena(int tamanho, float lista[]){
    for(int i = 0; i < tamanho; i++){
        int pos = i;

        for(int k = pos + 1; k < tamanho; k++){
            if(lista[k] < lista[pos]){
                pos = k;
            }
        }
        float variavel = lista[i];
        lista[i] = lista[pos];
        lista[pos] = variavel;
    }
}


int main(){
    
    float lista[5];
    for(int i = 0; i < 5; i++){
        scanf("%f", &lista[i]);
    }

    ordena(5, lista);

    printf("%.1f\n", lista[1] + lista[2] + lista[3]);

    return 0; 
}