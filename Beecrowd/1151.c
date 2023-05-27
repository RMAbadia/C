#include <stdio.h>

int main(){
    
    int valor, x, p1 = 1, p2 = 0, soma = 0;

    scanf("%d", &valor);

    for (x = 1; x <= valor; x++){

        if (x != valor){
            printf("%d ", soma);

            soma = soma + p1;
            p1 = p2;
            p2 = soma;
        }
        else{
           printf("%d\n", soma);

            soma = soma + p1;
            p1 = p2;
            p2 = soma; 
        }

    }

    return 0;
}