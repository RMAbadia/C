#include <stdio.h>

int main(){

    int valor, parcelas, resto;
    scanf("%d %d", &valor, &parcelas);

    if(valor % parcelas == 0){
        for(int i = 0; i < parcelas; i++){
            printf("%d\n", valor/parcelas);
        }
    }
    else{
        resto = valor%parcelas;
        for(int j = 0; j < resto; j++){
            printf("%d\n", (valor/parcelas)+1);
        }
        for(int k = 0; k < parcelas - resto; k++){
            printf("%d\n", (valor-resto)/parcelas);
        }
    }

    return 0;
}