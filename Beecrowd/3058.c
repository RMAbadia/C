#include <stdio.h>

int main(){

    float mercados, valor, peso, gasto = 1000000;
    scanf("%f", &mercados);

    while(mercados--){
        float valor;
        scanf("%f %f", &valor, &peso);
        valor = (1000/peso) * valor;
        valor < gasto ? gasto = valor : 0;
    }

    printf("%.2f\n", gasto);
   
    return 0;
}
