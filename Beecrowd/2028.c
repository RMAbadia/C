#include <stdio.h>
#include <string.h>

int main(){

    int valor, tamanho = 1, caso = 0;

    while(scanf("%d", &valor) != EOF){
        
        for(int i = 0; i <= valor; i++){
            tamanho += i;
        }

        int matriz[tamanho], comp = 0;
        caso++;

        memset(matriz, 0, sizeof matriz);

        for(int x = 0; x <= valor; x++){
            for(int j = 0; j < x; j++){
                comp++;
                matriz[comp] = x;   
            }
        }

        tamanho == 1? printf("Caso %d: %d numero\n", caso, tamanho) : printf("Caso %d: %d numeros\n", caso, tamanho);
        for(int i = 0; i < tamanho; i++){
            if(i == tamanho - 1){
                printf("%d", matriz[i]);
            }
            else{
                printf("%d ", matriz[i]);
            }
        }
        printf("\n\n");

        tamanho = 1;
    }
    
    return 0;
}