#include <stdio.h>

int main(){

    long long valor;
    scanf("%llu", &valor);

    while(valor != 0){
        printf("%llu", valor%10);
        valor = valor/10;
    }
    printf("\n");

    return 0;
}