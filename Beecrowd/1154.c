#include <stdio.h>

int main(){

    float x, idade, soma = 0;

    for (x = 0; x >= 0; x++){

        scanf("%f", &idade);

        if (idade >= 0){
            soma += idade;
        }
        else{
            break;
        }   
    }

    float media = (soma/x);

    printf("%.2f\n", media);

    return 0;
}