#include <stdio.h>

int main(){

    int rotina, capacidade, entrada, saida, resultado = 0, exedido = 0;
    scanf("%d %d", &rotina, &capacidade);

    while(rotina--){
        scanf("%d %d", &saida, &entrada);
        resultado -= saida;
        resultado += entrada;
        if(resultado > capacidade){
            exedido = 1;
            break;
        }
    }

    exedido == 0 ? printf("N\n") : printf("S\n");

    return 0;
}