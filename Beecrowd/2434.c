#include <stdio.h>

int main(){
    
    int dias, saldo, transacoes;
    scanf("%d %d", &dias, &saldo);
    int menor = saldo;
    
    for(int i = 0; i < dias; i++){
        scanf("%d", &transacoes);
        saldo += transacoes;
        menor > saldo ? menor = saldo : 0;
    }

    printf("%d\n", menor);

    return 0; 
}