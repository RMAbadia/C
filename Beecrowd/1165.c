#include <stdio.h>

int main(){

    int chamadas, numero, x, soma = 0, divisor;

    scanf("%d", &chamadas);

    for (x = 1; x <= chamadas; x++){

        scanf("%d", &numero);

        for (divisor = 2; divisor <= numero; divisor++){

            numero % divisor == 0 ? soma += divisor : 0;

        } 
        if (soma == numero){
            printf("%d eh primo\n", numero);
        }
        else{
            printf("%d nao eh primo\n", numero);
        }
        soma = 0;

    }

    return 0;
}