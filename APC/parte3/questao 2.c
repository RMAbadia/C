#include <stdio.h>

int main(){

    int numero, soma = 0;
    scanf("%d", &numero);

    for(int j = 1; j < numero; j++){
        numero % j == 0 ? soma += j : 0;
    }

    if(soma == 1){
        printf("primo\n");
    }
    else if(soma == numero){
        printf("perfeito\n");
    }
    else if(soma < numero){
        printf("deficiente\n");
    }
    else{
        printf("abundante\n");
    }

    return 0;
}